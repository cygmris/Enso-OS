/* Plank.c generated by valac 0.30.1, the Vala compiler
 * generated from Plank.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <plank.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>


#define PANTHER_TYPE_TEST_CLIENT (panther_test_client_get_type ())
#define PANTHER_TEST_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PANTHER_TYPE_TEST_CLIENT, PantherTestClient))
#define PANTHER_TEST_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PANTHER_TYPE_TEST_CLIENT, PantherTestClientClass))
#define PANTHER_IS_TEST_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PANTHER_TYPE_TEST_CLIENT))
#define PANTHER_IS_TEST_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PANTHER_TYPE_TEST_CLIENT))
#define PANTHER_TEST_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PANTHER_TYPE_TEST_CLIENT, PantherTestClientClass))

typedef struct _PantherTestClient PantherTestClient;
typedef struct _PantherTestClientClass PantherTestClientClass;
typedef struct _PantherTestClientPrivate PantherTestClientPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_variant_iter_free0(var) ((var == NULL) ? NULL : (var = (g_variant_iter_free (var), NULL)))
#define _g_variant_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_unref (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _PantherTestClient {
	GObject parent_instance;
	PantherTestClientPrivate * priv;
};

struct _PantherTestClientClass {
	GObjectClass parent_class;
};


static gpointer panther_test_client_parent_class = NULL;
static PlankUnityClientIface* panther_test_client_plank_unity_client_parent_iface = NULL;

GType panther_test_client_get_type (void) G_GNUC_CONST;
enum  {
	PANTHER_TEST_CLIENT_DUMMY_PROPERTY
};
static void panther_test_client_real_remove_launcher_entry (PlankUnityClient* base, const gchar* sender_name);
static void panther_test_client_real_update_launcher_entry (PlankUnityClient* base, const gchar* sender_name, GVariant* parameters, gboolean is_retry);
static gchar* panther_test_client_decode_payload (GVariantIter* prop_iter);
PantherTestClient* panther_test_client_new (void);
PantherTestClient* panther_test_client_construct (GType object_type);


static void panther_test_client_real_remove_launcher_entry (PlankUnityClient* base, const gchar* sender_name) {
	PantherTestClient * self;
	const gchar* _tmp0_ = NULL;
	self = (PantherTestClient*) base;
	g_return_if_fail (sender_name != NULL);
	_tmp0_ = sender_name;
	g_print ("Client '%s' was terminated\n", _tmp0_);
}


static void panther_test_client_real_update_launcher_entry (PlankUnityClient* base, const gchar* sender_name, GVariant* parameters, gboolean is_retry) {
	PantherTestClient * self;
	const gchar* _tmp0_ = NULL;
	gchar* app_uri = NULL;
	GVariantIter* prop_iter = NULL;
	GVariant* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	self = (PantherTestClient*) base;
	g_return_if_fail (sender_name != NULL);
	g_return_if_fail (parameters != NULL);
	_tmp0_ = sender_name;
	g_print ("Client '%s' requests an update\n", _tmp0_);
	_tmp1_ = parameters;
	g_variant_get (_tmp1_, "(sa{sv})", &app_uri, &prop_iter, NULL);
	_tmp2_ = panther_test_client_decode_payload (prop_iter);
	_tmp3_ = _tmp2_;
	g_print ("=> '%s'\n   %s\n", app_uri, _tmp3_);
	_g_free0 (_tmp3_);
	_g_variant_iter_free0 (prop_iter);
	_g_free0 (app_uri);
}


static gchar* panther_test_client_decode_payload (GVariantIter* prop_iter) {
	gchar* result = NULL;
	GString* _result_ = NULL;
	GString* _tmp0_ = NULL;
	gchar* prop_key = NULL;
	GVariant* prop_value = NULL;
	GString* _tmp41_ = NULL;
	gchar* _tmp42_ = NULL;
	g_return_val_if_fail (prop_iter != NULL, NULL);
	_tmp0_ = g_string_new ("");
	_result_ = _tmp0_;
	while (TRUE) {
		GVariantIter* _tmp1_ = NULL;
		gboolean _tmp2_ = FALSE;
		const gchar* _tmp3_ = NULL;
		_tmp1_ = prop_iter;
		_tmp2_ = g_variant_iter_next (_tmp1_, "{sv}", &prop_key, &prop_value, NULL);
		if (!_tmp2_) {
			break;
		}
		_tmp3_ = prop_key;
		if (g_strcmp0 (_tmp3_, "count") == 0) {
			gint64 val = 0LL;
			GVariant* _tmp4_ = NULL;
			gint64 _tmp5_ = 0LL;
			GString* _tmp6_ = NULL;
			gint64 _tmp7_ = 0LL;
			gchar* _tmp8_ = NULL;
			gchar* _tmp9_ = NULL;
			_tmp4_ = prop_value;
			_tmp5_ = g_variant_get_int64 (_tmp4_);
			val = _tmp5_;
			_tmp6_ = _result_;
			_tmp7_ = val;
			_tmp8_ = g_strdup_printf ("count = %" G_GINT64_FORMAT "; ", _tmp7_);
			_tmp9_ = _tmp8_;
			g_string_append (_tmp6_, _tmp9_);
			_g_free0 (_tmp9_);
		} else {
			const gchar* _tmp10_ = NULL;
			_tmp10_ = prop_key;
			if (g_strcmp0 (_tmp10_, "count-visible") == 0) {
				gboolean val = FALSE;
				GVariant* _tmp11_ = NULL;
				gboolean _tmp12_ = FALSE;
				const gchar* _tmp13_ = NULL;
				gboolean _tmp14_ = FALSE;
				GString* _tmp15_ = NULL;
				gchar* _tmp16_ = NULL;
				gchar* _tmp17_ = NULL;
				_tmp11_ = prop_value;
				_tmp12_ = g_variant_get_boolean (_tmp11_);
				val = _tmp12_;
				_tmp14_ = val;
				if (_tmp14_) {
					_tmp13_ = "true";
				} else {
					_tmp13_ = "false";
				}
				_tmp15_ = _result_;
				_tmp16_ = g_strdup_printf ("count-visible = %s; ", _tmp13_);
				_tmp17_ = _tmp16_;
				g_string_append (_tmp15_, _tmp17_);
				_g_free0 (_tmp17_);
			} else {
				const gchar* _tmp18_ = NULL;
				_tmp18_ = prop_key;
				if (g_strcmp0 (_tmp18_, "progress") == 0) {
					gdouble val = 0.0;
					GVariant* _tmp19_ = NULL;
					gdouble _tmp20_ = 0.0;
					GString* _tmp21_ = NULL;
					gdouble _tmp22_ = 0.0;
					gchar* _tmp23_ = NULL;
					gchar* _tmp24_ = NULL;
					_tmp19_ = prop_value;
					_tmp20_ = g_variant_get_double (_tmp19_);
					val = _tmp20_;
					_tmp21_ = _result_;
					_tmp22_ = val;
					_tmp23_ = g_strdup_printf ("progress = %f; ", _tmp22_);
					_tmp24_ = _tmp23_;
					g_string_append (_tmp21_, _tmp24_);
					_g_free0 (_tmp24_);
				} else {
					const gchar* _tmp25_ = NULL;
					_tmp25_ = prop_key;
					if (g_strcmp0 (_tmp25_, "progress-visible") == 0) {
						gboolean val = FALSE;
						GVariant* _tmp26_ = NULL;
						gboolean _tmp27_ = FALSE;
						const gchar* _tmp28_ = NULL;
						gboolean _tmp29_ = FALSE;
						GString* _tmp30_ = NULL;
						gchar* _tmp31_ = NULL;
						gchar* _tmp32_ = NULL;
						_tmp26_ = prop_value;
						_tmp27_ = g_variant_get_boolean (_tmp26_);
						val = _tmp27_;
						_tmp29_ = val;
						if (_tmp29_) {
							_tmp28_ = "true";
						} else {
							_tmp28_ = "false";
						}
						_tmp30_ = _result_;
						_tmp31_ = g_strdup_printf ("progress-visible = %s; ", _tmp28_);
						_tmp32_ = _tmp31_;
						g_string_append (_tmp30_, _tmp32_);
						_g_free0 (_tmp32_);
					} else {
						const gchar* _tmp33_ = NULL;
						_tmp33_ = prop_key;
						if (g_strcmp0 (_tmp33_, "urgent") == 0) {
							gboolean val = FALSE;
							GVariant* _tmp34_ = NULL;
							gboolean _tmp35_ = FALSE;
							const gchar* _tmp36_ = NULL;
							gboolean _tmp37_ = FALSE;
							GString* _tmp38_ = NULL;
							gchar* _tmp39_ = NULL;
							gchar* _tmp40_ = NULL;
							_tmp34_ = prop_value;
							_tmp35_ = g_variant_get_boolean (_tmp34_);
							val = _tmp35_;
							_tmp37_ = val;
							if (_tmp37_) {
								_tmp36_ = "true";
							} else {
								_tmp36_ = "false";
							}
							_tmp38_ = _result_;
							_tmp39_ = g_strdup_printf ("urgent = %s; ", _tmp36_);
							_tmp40_ = _tmp39_;
							g_string_append (_tmp38_, _tmp40_);
							_g_free0 (_tmp40_);
						}
					}
				}
			}
		}
	}
	_tmp41_ = _result_;
	_tmp42_ = _tmp41_->str;
	_tmp41_->str = NULL;
	result = _tmp42_;
	_g_variant_unref0 (prop_value);
	_g_free0 (prop_key);
	_g_string_free0 (_result_);
	return result;
}


PantherTestClient* panther_test_client_construct (GType object_type) {
	PantherTestClient * self = NULL;
	self = (PantherTestClient*) g_object_new (object_type, NULL);
	return self;
}


PantherTestClient* panther_test_client_new (void) {
	return panther_test_client_construct (PANTHER_TYPE_TEST_CLIENT);
}


static void panther_test_client_class_init (PantherTestClientClass * klass) {
	panther_test_client_parent_class = g_type_class_peek_parent (klass);
}


static void panther_test_client_plank_unity_client_interface_init (PlankUnityClientIface * iface) {
	panther_test_client_plank_unity_client_parent_iface = g_type_interface_peek_parent (iface);
	iface->remove_launcher_entry = (void (*)(PlankUnityClient*, const gchar*)) panther_test_client_real_remove_launcher_entry;
	iface->update_launcher_entry = (void (*)(PlankUnityClient*, const gchar*, GVariant*, gboolean)) panther_test_client_real_update_launcher_entry;
}


static void panther_test_client_instance_init (PantherTestClient * self) {
}


GType panther_test_client_get_type (void) {
	static volatile gsize panther_test_client_type_id__volatile = 0;
	if (g_once_init_enter (&panther_test_client_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PantherTestClientClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) panther_test_client_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PantherTestClient), 0, (GInstanceInitFunc) panther_test_client_instance_init, NULL };
		static const GInterfaceInfo plank_unity_client_info = { (GInterfaceInitFunc) panther_test_client_plank_unity_client_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType panther_test_client_type_id;
		panther_test_client_type_id = g_type_register_static (G_TYPE_OBJECT, "PantherTestClient", &g_define_type_info, 0);
		g_type_add_interface_static (panther_test_client_type_id, PLANK_TYPE_UNITY_CLIENT, &plank_unity_client_info);
		g_once_init_leave (&panther_test_client_type_id__volatile, panther_test_client_type_id);
	}
	return panther_test_client_type_id__volatile;
}


