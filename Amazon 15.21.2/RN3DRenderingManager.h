//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

@class RCTBridge;

@interface RN3DRenderingManager : RCTViewManager
{
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__48622;
+ (const struct RCTMethodInfo *)__rct_export__46021;
+ (const struct RCTMethodInfo *)__rct_export__44220;
+ (const struct RCTMethodInfo *)__rct_export__42619;
+ (const struct RCTMethodInfo *)__rct_export__41018;
+ (const struct RCTMethodInfo *)__rct_export__38617;
+ (const struct RCTMethodInfo *)__rct_export__36316;
+ (const struct RCTMethodInfo *)__rct_export__34015;
+ (const struct RCTMethodInfo *)__rct_export__31814;
+ (const struct RCTMethodInfo *)__rct_export__29513;
+ (const struct RCTMethodInfo *)__rct_export__27312;
+ (const struct RCTMethodInfo *)__rct_export__25111;
+ (const struct RCTMethodInfo *)__rct_export__22910;
+ (const struct RCTMethodInfo *)__rct_export__2079;
+ (const struct RCTMethodInfo *)__rct_export__1858;
+ (const struct RCTMethodInfo *)__rct_export__1617;
+ (const struct RCTMethodInfo *)__rct_export__1426;
+ (const struct RCTMethodInfo *)__rct_export__1245;
+ (const struct RCTMethodInfo *)__rct_export__1064;
+ (const struct RCTMethodInfo *)__rct_export__893;
+ (const struct RCTMethodInfo *)__rct_export__742;
+ (const struct RCTMethodInfo *)__rct_export__561;
+ (const struct RCTMethodInfo *)__rct_export__410;
+ (id)propConfig_onLoadModelError;
+ (id)propConfig_onLoadModelSuccess;
+ (id)propConfig_useDefaultCameraControl;
+ (id)propConfig_useDefaultLighting;
+ (void)load;
+ (id)moduleName;
- (void)setBridge:(id)arg1;
- (id)bridge;
- (void).cxx_destruct;
- (void)applyShadingModel:(id)arg1 withNode:(id)arg2 withType:(id)arg3;
- (void)applyImageBasedLighting:(id)arg1 withImage:(id)arg2 withIntensity:(float)arg3 useImageAsBackground:(_Bool)arg4 withColor:(id)arg5;
- (void)createCamera:(id)arg1 withNode:(id)arg2 useOrthographicProjection:(_Bool)arg3;
- (void)setCameraFOV:(id)arg1 withNode:(id)arg2 withFOV:(float)arg3;
- (void)setNodeVisibility:(id)arg1 withNode:(id)arg2 isVisible:(_Bool)arg3 isRecursive:(_Bool)arg4;
- (void)setNodeScale:(id)arg1 withNode:(id)arg2 withScale:(id)arg3;
- (void)setNodeRotationInEuler:(id)arg1 withNode:(id)arg2 withRotation:(id)arg3;
- (void)setNodePosition:(id)arg1 withNode:(id)arg2 withPosition:(id)arg3;
- (void)raycast:(id)arg1 withX:(float)arg2 withY:(float)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)getNodeUpDirection:(id)arg1 withNode:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)getNodeFrontDirection:(id)arg1 withNode:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)getNodeBoundingBox:(id)arg1 withNode:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)getNodeScale:(id)arg1 withNode:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)getNodeRotationInEuler:(id)arg1 withNode:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)getNodePosition:(id)arg1 withNode:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)createLighting:(id)arg1 withName:(id)arg2 withType:(id)arg3 withColor:(id)arg4 withIntensity:(float)arg5;
- (void)applyTexture:(id)arg1 withModel:(id)arg2 withNodeNameContains:(id)arg3 withTextureKey:(id)arg4 withTexturePath:(id)arg5;
- (void)setShaderModifierValue:(id)arg1 withModel:(id)arg2 withNodeNameContains:(id)arg3 withValue:(id)arg4 forKey:(id)arg5;
- (void)applyShaderModifier:(id)arg1 withModel:(id)arg2 withNodeNameContains:(id)arg3 withModifierString:(id)arg4;
- (void)loadMetallib:(id)arg1 withName:(id)arg2;
- (void)applyShader:(id)arg1 withModel:(id)arg2 withNodeNameContains:(id)arg3 withVertexFunction:(id)arg4 withFragmentFunction:(id)arg5;
- (void)removeNode:(id)arg1 withNodeName:(id)arg2;
- (void)loadModel:(id)arg1 withModelSrc:(id)arg2 withNodeName:(id)arg3;
- (id)methodQueue;
- (id)view;

@end

