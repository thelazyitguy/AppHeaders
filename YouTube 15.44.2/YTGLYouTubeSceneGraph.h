//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGLGroupNode.h>

@class YTGLPlayerOverlay, YTGLSceneNodeFactory, YTGLSwitchingVideoNode, YTGLVRGroupNode;

@interface YTGLYouTubeSceneGraph : YTGLGroupNode
{
    YTGLPlayerOverlay *_playerOverlay;
    YTGLSceneNodeFactory *_sceneNodeFactory;
    YTGLSwitchingVideoNode *_switchingVideoNode;
    YTGLVRGroupNode *_VRGroupNode;
    YTGLGroupNode *_gimbalPitch;
    YTGLGroupNode *_gimbalYaw;
    YTGLGroupNode *_gimbal;
    _Bool _VRModeEnabled;
}

+ (union _GLKVector2)eyeSightPitchAndYawWithHeadTransform:(union _GLKMatrix4)arg1;
- (void).cxx_destruct;
- (id)createVRGroupNode:(id)arg1 playerOverlay:(id)arg2 darkenVideoBlock:(CDUnknownBlockType)arg3 repositioningBlock:(CDUnknownBlockType)arg4 sphericalModeBlock:(CDUnknownBlockType)arg5;
- (void)repositionVRContentWithHeadView:(union _GLKMatrix4)arg1;
- (void)shutDown;
- (void)dealloc;
- (void)setVRModeEnabled:(_Bool)arg1;
- (id)initWithPlayerOverlay:(id)arg1 parentView:(id)arg2 videoProvider:(id)arg3;

@end

