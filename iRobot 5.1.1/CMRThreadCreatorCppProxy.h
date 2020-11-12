//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/CMRThreadCreator-Protocol.h>

@class NSString;

@interface CMRThreadCreatorCppProxy : NSObject <CMRThreadCreator>
{
    struct Handle<std::__1::shared_ptr<core::ThreadCreator>, std::__1::shared_ptr<core::ThreadCreator>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isRunningOnMainThread;
- (void)postOnMainThreadAfterDelay:(id)arg1 threadRunner:(id)arg2 delayedTime:(long long)arg3;
- (void)postOnMainThread:(id)arg1 threadRunner:(id)arg2;
- (void)startThread:(id)arg1 threadRunner:(id)arg2;
- (const shared_ptr_0e107a7c *)cppRef;
- (id)initWithCpp:(const shared_ptr_0e107a7c *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
