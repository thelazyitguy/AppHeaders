//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASKExtensionPoint.h"

#import "ASKTaskRunner-Protocol.h"

@class ASKInternalTaskRunner, NSString;

@interface ASKTaskRunnerImpl : ASKExtensionPoint <ASKTaskRunner>
{
    ASKInternalTaskRunner *_internalTaskRunner;
}

@property(readonly, nonatomic) ASKInternalTaskRunner *internalTaskRunner; // @synthesize internalTaskRunner=_internalTaskRunner;
- (void).cxx_destruct;
- (void)setInternalTaskRunner:(id)arg1;
- (_Bool)doesTaskExist:(id)arg1;
- (_Bool)runTaskAsync:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)runTasksAndWait:(id)arg1;
- (void)setupExtensionPoint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
