//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class NSString;
@protocol JSLCmlRenderResult, JSLComponentData;

@protocol JSLComponentTreeMutator <JavaObject>
- (_Bool)isUpdatableWithJSLComponentData:(id <JSLComponentData>)arg1 withJSLComponentData:(id <JSLComponentData>)arg2;
- (void)debugOutputWithInt:(int)arg1 withNSString:(NSString *)arg2;
- (void)finalizeBuildWithJSLComponentData:(id <JSLComponentData>)arg1;
- (void)updateArgsWithJSLComponentData:(id <JSLComponentData>)arg1;
- (void)replaceChildComponentWithJSLComponentData:(id <JSLComponentData>)arg1 withInt:(int)arg2 withId:(id)arg3 withInt:(int)arg4 withId:(id)arg5;
- (void)removeChildComponentWithJSLComponentData:(id <JSLComponentData>)arg1 withId:(id)arg2;
- (void)addChildComponentWithJSLComponentData:(id <JSLComponentData>)arg1 withInt:(int)arg2 withId:(id)arg3;
- (id)applyWrapperWithJSLComponentData:(id <JSLComponentData>)arg1 withJSLComponentData:(id <JSLComponentData>)arg2;
- (id)createComponentWithJSLComponentData:(id <JSLComponentData>)arg1;
- (void)setTestConfigurationWithBoolean:(_Bool)arg1 withBoolean:(_Bool)arg2;
- (id)rebindWithJSLCmlRenderResult:(id <JSLCmlRenderResult>)arg1;
@end
