//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class NSString;
@protocol DYNTopicId;

@interface DYNTopicContinuationContentViewObject : GOOBaseContentViewObject
{
    _Bool _loading;
    id <DYNTopicId> _topicID;
    NSString *_accessibilityIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) id <DYNTopicId> topicID; // @synthesize topicID=_topicID;
- (Class)contentViewClass;
- (id)initWithTopicID:(id)arg1 accessibilityIdentifier:(id)arg2 isLoading:(_Bool)arg3;

@end

