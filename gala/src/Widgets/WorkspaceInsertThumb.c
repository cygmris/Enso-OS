/* WorkspaceInsertThumb.c generated by valac 0.30.1, the Vala compiler
 * generated from WorkspaceInsertThumb.vala, do not modify */

/**/
/*  Copyright (C) 2014 Tom Beckmann*/
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
#include <clutter/clutter.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <meta/prefs.h>
#include <meta/window.h>
#include "gala.h"


#define GALA_TYPE_WORKSPACE_INSERT_THUMB (gala_workspace_insert_thumb_get_type ())
#define GALA_WORKSPACE_INSERT_THUMB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb))
#define GALA_WORKSPACE_INSERT_THUMB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumbClass))
#define GALA_IS_WORKSPACE_INSERT_THUMB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_WORKSPACE_INSERT_THUMB))
#define GALA_IS_WORKSPACE_INSERT_THUMB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_WORKSPACE_INSERT_THUMB))
#define GALA_WORKSPACE_INSERT_THUMB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumbClass))

typedef struct _GalaWorkspaceInsertThumb GalaWorkspaceInsertThumb;
typedef struct _GalaWorkspaceInsertThumbClass GalaWorkspaceInsertThumbClass;
typedef struct _GalaWorkspaceInsertThumbPrivate GalaWorkspaceInsertThumbPrivate;

#define GALA_TYPE_DRAG_DROP_ACTION (gala_drag_drop_action_get_type ())
#define GALA_DRAG_DROP_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_TYPE_DRAG_DROP_ACTION, GalaDragDropAction))
#define GALA_DRAG_DROP_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_TYPE_DRAG_DROP_ACTION, GalaDragDropActionClass))
#define GALA_IS_DRAG_DROP_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_TYPE_DRAG_DROP_ACTION))
#define GALA_IS_DRAG_DROP_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_TYPE_DRAG_DROP_ACTION))
#define GALA_DRAG_DROP_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_TYPE_DRAG_DROP_ACTION, GalaDragDropActionClass))

typedef struct _GalaDragDropAction GalaDragDropAction;
typedef struct _GalaDragDropActionClass GalaDragDropActionClass;

#define GALA_TYPE_DRAG_DROP_ACTION_TYPE (gala_drag_drop_action_type_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GalaWorkspaceInsertThumb {
	ClutterActor parent_instance;
	GalaWorkspaceInsertThumbPrivate * priv;
};

struct _GalaWorkspaceInsertThumbClass {
	ClutterActorClass parent_class;
};

struct _GalaWorkspaceInsertThumbPrivate {
	gint _workspace_index;
	gboolean _expanded;
	guint expand_timeout;
};

typedef enum  {
	GALA_DRAG_DROP_ACTION_TYPE_SOURCE = 0,
	GALA_DRAG_DROP_ACTION_TYPE_DESTINATION
} GalaDragDropActionType;


static gpointer gala_workspace_insert_thumb_parent_class = NULL;

GType gala_workspace_insert_thumb_get_type (void) G_GNUC_CONST;
#define GALA_WORKSPACE_INSERT_THUMB_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumbPrivate))
enum  {
	GALA_WORKSPACE_INSERT_THUMB_DUMMY_PROPERTY,
	GALA_WORKSPACE_INSERT_THUMB_WORKSPACE_INDEX,
	GALA_WORKSPACE_INSERT_THUMB_EXPANDED
};
#define GALA_WORKSPACE_INSERT_THUMB_EXPAND_DELAY 300
GalaWorkspaceInsertThumb* gala_workspace_insert_thumb_new (gint workspace_index);
GalaWorkspaceInsertThumb* gala_workspace_insert_thumb_construct (GType object_type, gint workspace_index);
#define GALA_ICON_GROUP_CONTAINER_SPACING 48
#define GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH 64
GType gala_drag_drop_action_get_type (void) G_GNUC_CONST;
GType gala_drag_drop_action_type_get_type (void) G_GNUC_CONST;
GalaDragDropAction* gala_drag_drop_action_new (GalaDragDropActionType type, const gchar* id);
GalaDragDropAction* gala_drag_drop_action_construct (GType object_type, GalaDragDropActionType type, const gchar* id);
static void __lambda62_ (GalaWorkspaceInsertThumb* self, gboolean hovered);
static void gala_workspace_insert_thumb_transform (GalaWorkspaceInsertThumb* self, gboolean expand);
static gboolean gala_workspace_insert_thumb_expand (GalaWorkspaceInsertThumb* self);
static gboolean _gala_workspace_insert_thumb_expand_gsource_func (gpointer self);
static void ___lambda62__gala_drag_drop_action_crossed (GalaDragDropAction* _sender, gboolean hovered, gpointer self);
void gala_workspace_insert_thumb_set_window_thumb (GalaWorkspaceInsertThumb* self, MetaWindow* window);
static void gala_workspace_insert_thumb_set_expanded (GalaWorkspaceInsertThumb* self, gboolean value);
static void gala_workspace_insert_thumb_add_pulse_animation (GalaWorkspaceInsertThumb* self);
gint gala_workspace_insert_thumb_get_workspace_index (GalaWorkspaceInsertThumb* self);
void gala_workspace_insert_thumb_set_workspace_index (GalaWorkspaceInsertThumb* self, gint value);
gboolean gala_workspace_insert_thumb_get_expanded (GalaWorkspaceInsertThumb* self);
static void gala_workspace_insert_thumb_finalize (GObject* obj);
static void _vala_gala_workspace_insert_thumb_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_gala_workspace_insert_thumb_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gboolean _gala_workspace_insert_thumb_expand_gsource_func (gpointer self) {
	gboolean result;
	result = gala_workspace_insert_thumb_expand ((GalaWorkspaceInsertThumb*) self);
#line 57 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	return result;
#line 118 "WorkspaceInsertThumb.c"
}


static void __lambda62_ (GalaWorkspaceInsertThumb* self, gboolean hovered) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
#line 46 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = meta_prefs_get_dynamic_workspaces ();
#line 46 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	if (!_tmp0_) {
#line 47 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		return;
#line 131 "WorkspaceInsertThumb.c"
	}
#line 49 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp1_ = hovered;
#line 49 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	if (!_tmp1_) {
#line 137 "WorkspaceInsertThumb.c"
		guint _tmp2_ = 0U;
#line 50 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		_tmp2_ = self->priv->expand_timeout;
#line 50 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		if (_tmp2_ != ((guint) 0)) {
#line 143 "WorkspaceInsertThumb.c"
			guint _tmp3_ = 0U;
#line 51 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
			_tmp3_ = self->priv->expand_timeout;
#line 51 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
			g_source_remove (_tmp3_);
#line 52 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
			self->priv->expand_timeout = (guint) 0;
#line 151 "WorkspaceInsertThumb.c"
		}
#line 55 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		gala_workspace_insert_thumb_transform (self, FALSE);
#line 155 "WorkspaceInsertThumb.c"
	} else {
		guint _tmp4_ = 0U;
#line 57 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		_tmp4_ = g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) GALA_WORKSPACE_INSERT_THUMB_EXPAND_DELAY, _gala_workspace_insert_thumb_expand_gsource_func, g_object_ref (self), g_object_unref);
#line 57 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		self->priv->expand_timeout = _tmp4_;
#line 162 "WorkspaceInsertThumb.c"
	}
}


static void ___lambda62__gala_drag_drop_action_crossed (GalaDragDropAction* _sender, gboolean hovered, gpointer self) {
#line 45 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	__lambda62_ ((GalaWorkspaceInsertThumb*) self, hovered);
#line 170 "WorkspaceInsertThumb.c"
}


GalaWorkspaceInsertThumb* gala_workspace_insert_thumb_construct (GType object_type, gint workspace_index) {
	GalaWorkspaceInsertThumb * self = NULL;
	gint _tmp0_ = 0;
	GalaDragDropAction* drop = NULL;
	GalaDragDropAction* _tmp1_ = NULL;
#line 34 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = workspace_index;
#line 34 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self = (GalaWorkspaceInsertThumb*) g_object_new (object_type, "workspace-index", _tmp0_, NULL);
#line 36 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_width ((ClutterActor*) self, (gfloat) GALA_ICON_GROUP_CONTAINER_SPACING);
#line 37 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_height ((ClutterActor*) self, (gfloat) GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH);
#line 38 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_y ((ClutterActor*) self, (gfloat) ((GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH - GALA_ICON_GROUP_CONTAINER_SPACING) / 2));
#line 39 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_opacity ((ClutterActor*) self, (guint) 0);
#line 40 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_pivot_point ((ClutterActor*) self, 0.5f, 0.5f);
#line 41 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_reactive ((ClutterActor*) self, TRUE);
#line 42 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_x_align ((ClutterActor*) self, CLUTTER_ACTOR_ALIGN_CENTER);
#line 44 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp1_ = gala_drag_drop_action_new (GALA_DRAG_DROP_ACTION_TYPE_DESTINATION, "multitaskingview-window");
#line 44 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_object_ref_sink (_tmp1_);
#line 44 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	drop = _tmp1_;
#line 45 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_signal_connect_object (drop, "crossed", (GCallback) ___lambda62__gala_drag_drop_action_crossed, self, 0);
#line 60 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_add_action ((ClutterActor*) self, (ClutterAction*) drop);
#line 32 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_g_object_unref0 (drop);
#line 32 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	return self;
#line 211 "WorkspaceInsertThumb.c"
}


GalaWorkspaceInsertThumb* gala_workspace_insert_thumb_new (gint workspace_index) {
#line 32 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	return gala_workspace_insert_thumb_construct (GALA_TYPE_WORKSPACE_INSERT_THUMB, workspace_index);
#line 218 "WorkspaceInsertThumb.c"
}


void gala_workspace_insert_thumb_set_window_thumb (GalaWorkspaceInsertThumb* self, MetaWindow* window) {
	GalaWindowIcon* icon = NULL;
	MetaWindow* _tmp0_ = NULL;
	GalaWindowIcon* _tmp1_ = NULL;
#line 63 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_if_fail (self != NULL);
#line 63 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_if_fail (window != NULL);
#line 65 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_destroy_all_children ((ClutterActor*) self);
#line 67 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = window;
#line 67 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp1_ = gala_window_icon_new (_tmp0_, GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH, FALSE);
#line 67 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_object_ref_sink (_tmp1_);
#line 67 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	icon = _tmp1_;
#line 68 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_x_align ((ClutterActor*) icon, CLUTTER_ACTOR_ALIGN_CENTER);
#line 69 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_add_child ((ClutterActor*) self, (ClutterActor*) icon);
#line 63 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_g_object_unref0 (icon);
#line 246 "WorkspaceInsertThumb.c"
}


static gboolean gala_workspace_insert_thumb_expand (GalaWorkspaceInsertThumb* self) {
	gboolean result = FALSE;
#line 72 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 74 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self->priv->expand_timeout = (guint) 0;
#line 76 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	gala_workspace_insert_thumb_transform (self, TRUE);
#line 78 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	result = FALSE;
#line 78 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	return result;
#line 262 "WorkspaceInsertThumb.c"
}


static void gala_workspace_insert_thumb_transform (GalaWorkspaceInsertThumb* self, gboolean expand) {
	gboolean _tmp0_ = FALSE;
#line 81 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_if_fail (self != NULL);
#line 83 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_save_easing_state ((ClutterActor*) self);
#line 84 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_easing_mode ((ClutterActor*) self, CLUTTER_EASE_OUT_QUAD);
#line 85 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_set_easing_duration ((ClutterActor*) self, (guint) 200);
#line 87 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = expand;
#line 87 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	if (!_tmp0_) {
#line 88 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		clutter_actor_remove_transition ((ClutterActor*) self, "pulse");
#line 89 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		clutter_actor_set_opacity ((ClutterActor*) self, (guint) 0);
#line 90 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		clutter_actor_set_width ((ClutterActor*) self, (gfloat) GALA_ICON_GROUP_CONTAINER_SPACING);
#line 91 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		gala_workspace_insert_thumb_set_expanded (self, FALSE);
#line 288 "WorkspaceInsertThumb.c"
	} else {
#line 93 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		gala_workspace_insert_thumb_add_pulse_animation (self);
#line 94 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		clutter_actor_set_opacity ((ClutterActor*) self, (guint) 200);
#line 95 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		clutter_actor_set_width ((ClutterActor*) self, (gfloat) (GALA_ICON_GROUP_CONTAINER_GROUP_WIDTH + (GALA_ICON_GROUP_CONTAINER_SPACING * 2)));
#line 96 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		gala_workspace_insert_thumb_set_expanded (self, TRUE);
#line 298 "WorkspaceInsertThumb.c"
	}
#line 99 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_restore_easing_state ((ClutterActor*) self);
#line 302 "WorkspaceInsertThumb.c"
}


static void gala_workspace_insert_thumb_add_pulse_animation (GalaWorkspaceInsertThumb* self) {
	ClutterTransitionGroup* transition = NULL;
	ClutterTransitionGroup* _tmp0_ = NULL;
	ClutterPropertyTransition* scale_x_transition = NULL;
	ClutterPropertyTransition* _tmp1_ = NULL;
	GValue _tmp2_ = {0};
	GValue _tmp3_ = {0};
	ClutterPropertyTransition* scale_y_transition = NULL;
	ClutterPropertyTransition* _tmp4_ = NULL;
	GValue _tmp5_ = {0};
	GValue _tmp6_ = {0};
#line 102 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_if_fail (self != NULL);
#line 104 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = (ClutterTransitionGroup*) clutter_transition_group_new ();
#line 104 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	transition = _tmp0_;
#line 105 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_timeline_set_duration ((ClutterTimeline*) transition, (guint) 800);
#line 106 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_timeline_set_auto_reverse ((ClutterTimeline*) transition, TRUE);
#line 107 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_timeline_set_repeat_count ((ClutterTimeline*) transition, -1);
#line 108 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_timeline_set_progress_mode ((ClutterTimeline*) transition, CLUTTER_LINEAR);
#line 110 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp1_ = (ClutterPropertyTransition*) clutter_property_transition_new ("scale-x");
#line 110 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	scale_x_transition = _tmp1_;
#line 111 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_init (&_tmp2_, G_TYPE_DOUBLE);
#line 111 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_set_double (&_tmp2_, 0.8);
#line 111 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_transition_set_from_value ((ClutterTransition*) scale_x_transition, &_tmp2_);
#line 111 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_IS_VALUE (&_tmp2_) ? (g_value_unset (&_tmp2_), NULL) : NULL;
#line 112 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_init (&_tmp3_, G_TYPE_DOUBLE);
#line 112 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_set_double (&_tmp3_, 1.1);
#line 112 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_transition_set_to_value ((ClutterTransition*) scale_x_transition, &_tmp3_);
#line 112 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_IS_VALUE (&_tmp3_) ? (g_value_unset (&_tmp3_), NULL) : NULL;
#line 113 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_timeline_set_auto_reverse ((ClutterTimeline*) scale_x_transition, TRUE);
#line 115 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp4_ = (ClutterPropertyTransition*) clutter_property_transition_new ("scale-y");
#line 115 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	scale_y_transition = _tmp4_;
#line 116 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_init (&_tmp5_, G_TYPE_DOUBLE);
#line 116 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_set_double (&_tmp5_, 0.8);
#line 116 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_transition_set_from_value ((ClutterTransition*) scale_y_transition, &_tmp5_);
#line 116 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_IS_VALUE (&_tmp5_) ? (g_value_unset (&_tmp5_), NULL) : NULL;
#line 117 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_init (&_tmp6_, G_TYPE_DOUBLE);
#line 117 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_value_set_double (&_tmp6_, 1.1);
#line 117 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_transition_set_to_value ((ClutterTransition*) scale_y_transition, &_tmp6_);
#line 117 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_IS_VALUE (&_tmp6_) ? (g_value_unset (&_tmp6_), NULL) : NULL;
#line 118 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_timeline_set_auto_reverse ((ClutterTimeline*) scale_y_transition, TRUE);
#line 120 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_transition_group_add_transition (transition, (ClutterTransition*) scale_x_transition);
#line 121 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_transition_group_add_transition (transition, (ClutterTransition*) scale_y_transition);
#line 123 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	clutter_actor_add_transition ((ClutterActor*) self, "pulse", (ClutterTransition*) transition);
#line 102 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_g_object_unref0 (scale_y_transition);
#line 102 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_g_object_unref0 (scale_x_transition);
#line 102 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_g_object_unref0 (transition);
#line 387 "WorkspaceInsertThumb.c"
}


gint gala_workspace_insert_thumb_get_workspace_index (GalaWorkspaceInsertThumb* self) {
	gint result;
	gint _tmp0_ = 0;
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = self->priv->_workspace_index;
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	result = _tmp0_;
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	return result;
#line 402 "WorkspaceInsertThumb.c"
}


void gala_workspace_insert_thumb_set_workspace_index (GalaWorkspaceInsertThumb* self, gint value) {
	gint _tmp0_ = 0;
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_if_fail (self != NULL);
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = value;
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self->priv->_workspace_index = _tmp0_;
#line 27 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_object_notify ((GObject *) self, "workspace-index");
#line 416 "WorkspaceInsertThumb.c"
}


gboolean gala_workspace_insert_thumb_get_expanded (GalaWorkspaceInsertThumb* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = self->priv->_expanded;
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	result = _tmp0_;
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	return result;
#line 431 "WorkspaceInsertThumb.c"
}


static void gala_workspace_insert_thumb_set_expanded (GalaWorkspaceInsertThumb* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_return_if_fail (self != NULL);
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	_tmp0_ = value;
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self->priv->_expanded = _tmp0_;
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_object_notify ((GObject *) self, "expanded");
#line 445 "WorkspaceInsertThumb.c"
}


static void gala_workspace_insert_thumb_class_init (GalaWorkspaceInsertThumbClass * klass) {
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	gala_workspace_insert_thumb_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_type_class_add_private (klass, sizeof (GalaWorkspaceInsertThumbPrivate));
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_workspace_insert_thumb_get_property;
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_workspace_insert_thumb_set_property;
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_workspace_insert_thumb_finalize;
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_WORKSPACE_INSERT_THUMB_WORKSPACE_INDEX, g_param_spec_int ("workspace-index", "workspace-index", "workspace-index", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_WORKSPACE_INSERT_THUMB_EXPANDED, g_param_spec_boolean ("expanded", "expanded", "expanded", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 464 "WorkspaceInsertThumb.c"
}


static void gala_workspace_insert_thumb_instance_init (GalaWorkspaceInsertThumb * self) {
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self->priv = GALA_WORKSPACE_INSERT_THUMB_GET_PRIVATE (self);
#line 28 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self->priv->_expanded = FALSE;
#line 30 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self->priv->expand_timeout = (guint) 0;
#line 475 "WorkspaceInsertThumb.c"
}


static void gala_workspace_insert_thumb_finalize (GObject* obj) {
	GalaWorkspaceInsertThumb * self;
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb);
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	G_OBJECT_CLASS (gala_workspace_insert_thumb_parent_class)->finalize (obj);
#line 485 "WorkspaceInsertThumb.c"
}


GType gala_workspace_insert_thumb_get_type (void) {
	static volatile gsize gala_workspace_insert_thumb_type_id__volatile = 0;
	if (g_once_init_enter (&gala_workspace_insert_thumb_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GalaWorkspaceInsertThumbClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_workspace_insert_thumb_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaWorkspaceInsertThumb), 0, (GInstanceInitFunc) gala_workspace_insert_thumb_instance_init, NULL };
		GType gala_workspace_insert_thumb_type_id;
		gala_workspace_insert_thumb_type_id = g_type_register_static (clutter_actor_get_type (), "GalaWorkspaceInsertThumb", &g_define_type_info, 0);
		g_once_init_leave (&gala_workspace_insert_thumb_type_id__volatile, gala_workspace_insert_thumb_type_id);
	}
	return gala_workspace_insert_thumb_type_id__volatile;
}


static void _vala_gala_workspace_insert_thumb_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	GalaWorkspaceInsertThumb * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb);
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	switch (property_id) {
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		case GALA_WORKSPACE_INSERT_THUMB_WORKSPACE_INDEX:
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		g_value_set_int (value, gala_workspace_insert_thumb_get_workspace_index (self));
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		break;
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		case GALA_WORKSPACE_INSERT_THUMB_EXPANDED:
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		g_value_set_boolean (value, gala_workspace_insert_thumb_get_expanded (self));
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		break;
#line 518 "WorkspaceInsertThumb.c"
		default:
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		break;
#line 524 "WorkspaceInsertThumb.c"
	}
}


static void _vala_gala_workspace_insert_thumb_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	GalaWorkspaceInsertThumb * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_WORKSPACE_INSERT_THUMB, GalaWorkspaceInsertThumb);
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
	switch (property_id) {
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		case GALA_WORKSPACE_INSERT_THUMB_WORKSPACE_INDEX:
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		gala_workspace_insert_thumb_set_workspace_index (self, g_value_get_int (value));
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		break;
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		case GALA_WORKSPACE_INSERT_THUMB_EXPANDED:
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		gala_workspace_insert_thumb_set_expanded (self, g_value_get_boolean (value));
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		break;
#line 546 "WorkspaceInsertThumb.c"
		default:
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/nick/work/gala/src/Widgets/WorkspaceInsertThumb.vala"
		break;
#line 552 "WorkspaceInsertThumb.c"
	}
}



