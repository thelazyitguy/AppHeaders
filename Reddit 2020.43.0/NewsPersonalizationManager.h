//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Account, NSOrderedSet, NSSet;

@interface NewsPersonalizationManager : NSObject
{
    NSOrderedSet *_subscribedTopics;
    NSSet *_subscribedSubtopics;
    Account *_account;
}

- (void).cxx_destruct;
@property(nonatomic) __weak Account *account; // @synthesize account=_account;
@property(copy, nonatomic) NSSet *subscribedSubtopics; // @synthesize subscribedSubtopics=_subscribedSubtopics;
@property(copy, nonatomic) NSOrderedSet *subscribedTopics; // @synthesize subscribedTopics=_subscribedTopics;
- (void)writeNewsTopicSubtopicPersonalization;
- (id)descriptionInfoFromMulti:(id)arg1;
- (id)newsTopicsWithMultis:(id)arg1;
- (id)newsTopicsWithTopics:(id)arg1;
- (void)setSubscribedTopics:(id)arg1 subscribedSubtopics:(id)arg2;
- (_Bool)isSubscribedSubtopic:(id)arg1;
- (_Bool)isSubscribedTopic:(id)arg1;
- (void)unsubscribeFromSubtopic:(id)arg1;
- (void)subscribeToSubtopic:(id)arg1;
- (void)unsubscribeFromTopic:(id)arg1;
- (void)subscribeToTopic:(id)arg1;
@property(readonly, nonatomic) _Bool hasUserPersonalizedNews;
- (id)initWithAccount:(id)arg1;

@end
