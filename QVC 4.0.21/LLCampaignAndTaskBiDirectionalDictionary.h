//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface LLCampaignAndTaskBiDirectionalDictionary : NSObject
{
    NSMutableDictionary *_campaignToTaskMappingDictionary;
    NSMutableDictionary *_taskToCampaignDictionary;
    NSMutableDictionary *_campaignToCompletionTaskDictionary;
    NSObject<OS_dispatch_queue> *_dictionarySyncQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dictionarySyncQueue; // @synthesize dictionarySyncQueue=_dictionarySyncQueue;
@property(retain, nonatomic) NSMutableDictionary *campaignToCompletionTaskDictionary; // @synthesize campaignToCompletionTaskDictionary=_campaignToCompletionTaskDictionary;
@property(retain, nonatomic) NSMutableDictionary *taskToCampaignDictionary; // @synthesize taskToCampaignDictionary=_taskToCampaignDictionary;
@property(retain, nonatomic) NSMutableDictionary *campaignToTaskMappingDictionary; // @synthesize campaignToTaskMappingDictionary=_campaignToTaskMappingDictionary;
- (CDUnknownBlockType)removeByTask:(id)arg1;
- (id)campaignForTask:(id)arg1;
- (id)taskForCampaign:(id)arg1;
- (void)updateCompletionTask:(CDUnknownBlockType)arg1 forCampaign:(id)arg2;
- (void)addMappingBetweenCampaign:(id)arg1 URLSessionTask:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (id)init;

@end

