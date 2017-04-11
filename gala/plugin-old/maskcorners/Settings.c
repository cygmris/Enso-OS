/* Settings.c generated by valac 0.30.1, the Vala compiler
 * generated from Settings.vala, do not modify */

/**/
/*  Copyright (C) 2015 Rory J Sanderson*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <granite.h>
#include "config.h"


#define GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS (gala_plugins_mask_corners_settings_get_type ())
#define GALA_PLUGINS_MASK_CORNERS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettings))
#define GALA_PLUGINS_MASK_CORNERS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettingsClass))
#define GALA_PLUGINS_MASK_CORNERS_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS))
#define GALA_PLUGINS_MASK_CORNERS_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS))
#define GALA_PLUGINS_MASK_CORNERS_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettingsClass))

typedef struct _GalaPluginsMaskCornersSettings GalaPluginsMaskCornersSettings;
typedef struct _GalaPluginsMaskCornersSettingsClass GalaPluginsMaskCornersSettingsClass;
typedef struct _GalaPluginsMaskCornersSettingsPrivate GalaPluginsMaskCornersSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GalaPluginsMaskCornersSettings {
	GraniteServicesSettings parent_instance;
	GalaPluginsMaskCornersSettingsPrivate * priv;
};

struct _GalaPluginsMaskCornersSettingsClass {
	GraniteServicesSettingsClass parent_class;
};

struct _GalaPluginsMaskCornersSettingsPrivate {
	gboolean _enable;
	gint _corner_radius;
	gboolean _disable_on_fullscreen;
	gboolean _only_on_primary;
};


static gpointer gala_plugins_mask_corners_settings_parent_class = NULL;
static GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_instance;
static GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_instance = NULL;

GType gala_plugins_mask_corners_settings_get_type (void) G_GNUC_CONST;
#define GALA_PLUGINS_MASK_CORNERS_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettingsPrivate))
enum  {
	GALA_PLUGINS_MASK_CORNERS_SETTINGS_DUMMY_PROPERTY,
	GALA_PLUGINS_MASK_CORNERS_SETTINGS_ENABLE,
	GALA_PLUGINS_MASK_CORNERS_SETTINGS_CORNER_RADIUS,
	GALA_PLUGINS_MASK_CORNERS_SETTINGS_DISABLE_ON_FULLSCREEN,
	GALA_PLUGINS_MASK_CORNERS_SETTINGS_ONLY_ON_PRIMARY
};
GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_get_default (void);
static GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_new (void);
static GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_construct (GType object_type);
gboolean gala_plugins_mask_corners_settings_get_enable (GalaPluginsMaskCornersSettings* self);
void gala_plugins_mask_corners_settings_set_enable (GalaPluginsMaskCornersSettings* self, gboolean value);
gint gala_plugins_mask_corners_settings_get_corner_radius (GalaPluginsMaskCornersSettings* self);
void gala_plugins_mask_corners_settings_set_corner_radius (GalaPluginsMaskCornersSettings* self, gint value);
gboolean gala_plugins_mask_corners_settings_get_disable_on_fullscreen (GalaPluginsMaskCornersSettings* self);
void gala_plugins_mask_corners_settings_set_disable_on_fullscreen (GalaPluginsMaskCornersSettings* self, gboolean value);
gboolean gala_plugins_mask_corners_settings_get_only_on_primary (GalaPluginsMaskCornersSettings* self);
void gala_plugins_mask_corners_settings_set_only_on_primary (GalaPluginsMaskCornersSettings* self, gboolean value);
static void gala_plugins_mask_corners_settings_finalize (GObject* obj);
static void _vala_gala_plugins_mask_corners_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gala_plugins_mask_corners_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_get_default (void) {
	GalaPluginsMaskCornersSettings* result = NULL;
	GalaPluginsMaskCornersSettings* _tmp0_ = NULL;
	GalaPluginsMaskCornersSettings* _tmp2_ = NULL;
#line 26 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = gala_plugins_mask_corners_settings_instance;
#line 26 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	if (_tmp0_ == NULL) {
#line 94 "Settings.c"
		GalaPluginsMaskCornersSettings* _tmp1_ = NULL;
#line 27 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		_tmp1_ = gala_plugins_mask_corners_settings_new ();
#line 27 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		_g_object_unref0 (gala_plugins_mask_corners_settings_instance);
#line 27 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		gala_plugins_mask_corners_settings_instance = _tmp1_;
#line 102 "Settings.c"
	}
#line 29 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp2_ = gala_plugins_mask_corners_settings_instance;
#line 29 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	result = _tmp2_;
#line 29 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return result;
#line 110 "Settings.c"
}


static GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_construct (GType object_type) {
	GalaPluginsMaskCornersSettings * self = NULL;
#line 39 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self = (GalaPluginsMaskCornersSettings*) granite_services_settings_construct (object_type, SCHEMA ".mask-corners");
#line 37 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return self;
#line 120 "Settings.c"
}


static GalaPluginsMaskCornersSettings* gala_plugins_mask_corners_settings_new (void) {
#line 37 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return gala_plugins_mask_corners_settings_construct (GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS);
#line 127 "Settings.c"
}


gboolean gala_plugins_mask_corners_settings_get_enable (GalaPluginsMaskCornersSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = self->priv->_enable;
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	result = _tmp0_;
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return result;
#line 142 "Settings.c"
}


void gala_plugins_mask_corners_settings_set_enable (GalaPluginsMaskCornersSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_if_fail (self != NULL);
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = value;
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_enable = _tmp0_;
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_notify ((GObject *) self, "enable");
#line 156 "Settings.c"
}


gint gala_plugins_mask_corners_settings_get_corner_radius (GalaPluginsMaskCornersSettings* self) {
	gint result;
	gint _tmp0_ = 0;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = self->priv->_corner_radius;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	result = _tmp0_;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return result;
#line 171 "Settings.c"
}


void gala_plugins_mask_corners_settings_set_corner_radius (GalaPluginsMaskCornersSettings* self, gint value) {
	gint _tmp0_ = 0;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_if_fail (self != NULL);
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = value;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_corner_radius = _tmp0_;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_notify ((GObject *) self, "corner-radius");
#line 185 "Settings.c"
}


gboolean gala_plugins_mask_corners_settings_get_disable_on_fullscreen (GalaPluginsMaskCornersSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = self->priv->_disable_on_fullscreen;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	result = _tmp0_;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return result;
#line 200 "Settings.c"
}


void gala_plugins_mask_corners_settings_set_disable_on_fullscreen (GalaPluginsMaskCornersSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_if_fail (self != NULL);
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = value;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_disable_on_fullscreen = _tmp0_;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_notify ((GObject *) self, "disable-on-fullscreen");
#line 214 "Settings.c"
}


gboolean gala_plugins_mask_corners_settings_get_only_on_primary (GalaPluginsMaskCornersSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = self->priv->_only_on_primary;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	result = _tmp0_;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	return result;
#line 229 "Settings.c"
}


void gala_plugins_mask_corners_settings_set_only_on_primary (GalaPluginsMaskCornersSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_return_if_fail (self != NULL);
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	_tmp0_ = value;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_only_on_primary = _tmp0_;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_notify ((GObject *) self, "only-on-primary");
#line 243 "Settings.c"
}


static void gala_plugins_mask_corners_settings_class_init (GalaPluginsMaskCornersSettingsClass * klass) {
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	gala_plugins_mask_corners_settings_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_type_class_add_private (klass, sizeof (GalaPluginsMaskCornersSettingsPrivate));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_plugins_mask_corners_settings_get_property;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_plugins_mask_corners_settings_set_property;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_plugins_mask_corners_settings_finalize;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_PLUGINS_MASK_CORNERS_SETTINGS_ENABLE, g_param_spec_boolean ("enable", "enable", "enable", TRUE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_PLUGINS_MASK_CORNERS_SETTINGS_CORNER_RADIUS, g_param_spec_int ("corner-radius", "corner-radius", "corner-radius", G_MININT, G_MAXINT, 4, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_PLUGINS_MASK_CORNERS_SETTINGS_DISABLE_ON_FULLSCREEN, g_param_spec_boolean ("disable-on-fullscreen", "disable-on-fullscreen", "disable-on-fullscreen", TRUE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_PLUGINS_MASK_CORNERS_SETTINGS_ONLY_ON_PRIMARY, g_param_spec_boolean ("only-on-primary", "only-on-primary", "only-on-primary", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 266 "Settings.c"
}


static void gala_plugins_mask_corners_settings_instance_init (GalaPluginsMaskCornersSettings * self) {
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv = GALA_PLUGINS_MASK_CORNERS_SETTINGS_GET_PRIVATE (self);
#line 32 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_enable = TRUE;
#line 33 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_corner_radius = 4;
#line 34 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_disable_on_fullscreen = TRUE;
#line 35 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self->priv->_only_on_primary = FALSE;
#line 281 "Settings.c"
}


static void gala_plugins_mask_corners_settings_finalize (GObject* obj) {
	GalaPluginsMaskCornersSettings * self;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettings);
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	G_OBJECT_CLASS (gala_plugins_mask_corners_settings_parent_class)->finalize (obj);
#line 291 "Settings.c"
}


GType gala_plugins_mask_corners_settings_get_type (void) {
	static volatile gsize gala_plugins_mask_corners_settings_type_id__volatile = 0;
	if (g_once_init_enter (&gala_plugins_mask_corners_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GalaPluginsMaskCornersSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_plugins_mask_corners_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaPluginsMaskCornersSettings), 0, (GInstanceInitFunc) gala_plugins_mask_corners_settings_instance_init, NULL };
		GType gala_plugins_mask_corners_settings_type_id;
		gala_plugins_mask_corners_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "GalaPluginsMaskCornersSettings", &g_define_type_info, 0);
		g_once_init_leave (&gala_plugins_mask_corners_settings_type_id__volatile, gala_plugins_mask_corners_settings_type_id);
	}
	return gala_plugins_mask_corners_settings_type_id__volatile;
}


static void _vala_gala_plugins_mask_corners_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GalaPluginsMaskCornersSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettings);
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	switch (property_id) {
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_ENABLE:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		g_value_set_boolean (value, gala_plugins_mask_corners_settings_get_enable (self));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_CORNER_RADIUS:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		g_value_set_int (value, gala_plugins_mask_corners_settings_get_corner_radius (self));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_DISABLE_ON_FULLSCREEN:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		g_value_set_boolean (value, gala_plugins_mask_corners_settings_get_disable_on_fullscreen (self));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_ONLY_ON_PRIMARY:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		g_value_set_boolean (value, gala_plugins_mask_corners_settings_get_only_on_primary (self));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 336 "Settings.c"
		default:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 342 "Settings.c"
	}
}


static void _vala_gala_plugins_mask_corners_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GalaPluginsMaskCornersSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_PLUGINS_MASK_CORNERS_TYPE_SETTINGS, GalaPluginsMaskCornersSettings);
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
	switch (property_id) {
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_ENABLE:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		gala_plugins_mask_corners_settings_set_enable (self, g_value_get_boolean (value));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_CORNER_RADIUS:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		gala_plugins_mask_corners_settings_set_corner_radius (self, g_value_get_int (value));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_DISABLE_ON_FULLSCREEN:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		gala_plugins_mask_corners_settings_set_disable_on_fullscreen (self, g_value_get_boolean (value));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		case GALA_PLUGINS_MASK_CORNERS_SETTINGS_ONLY_ON_PRIMARY:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		gala_plugins_mask_corners_settings_set_only_on_primary (self, g_value_get_boolean (value));
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 376 "Settings.c"
		default:
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/nick/work/gala/plugins/maskcorners/Settings.vala"
		break;
#line 382 "Settings.c"
	}
}



