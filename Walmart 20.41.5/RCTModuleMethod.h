//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ElectrodeContainer/RCTBridgeMethod-Protocol.h>

@class NSArray, NSInvocation, NSMutableArray, NSString;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod>
{
    Class _moduleClass;
    const struct RCTMethodInfo *_methodInfo;
    NSString *_JSMethodName;
    SEL _selector;
    NSInvocation *_invocation;
    NSArray *_argumentBlocks;
    NSMutableArray *_retainedObjects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
@property(readonly, copy) NSString *description;
- (id)methodName;
- (id)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3;
@property(readonly, nonatomic) unsigned long long functionType;
@property(readonly, nonatomic) const char *JSMethodName;
@property(readonly, nonatomic) SEL selector;
- (void)processMethodSignature;
- (id)initWithExportedMethod:(const struct RCTMethodInfo *)arg1 moduleClass:(Class)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
