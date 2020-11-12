//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOutput.h>

#import <ServiceKnowledge/SFCIndexedEntity-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SCArticleSummaryOutput : SFCOutput <SFCIndexedEntity>
{
    NSString *_articleId;
    NSString *_articleNumber;
    NSString *_title;
    NSString *_summary;
    NSString *_url;
    NSString *_urlName;
    unsigned long long _viewCount;
    unsigned long long _downVoteCount;
    unsigned long long _upVoteCount;
    double _viewScore;
    NSDate *_lastPublishedDate;
    NSArray *_categoryGroups;
}

@property(readonly, nonatomic) NSArray *categoryGroups; // @synthesize categoryGroups=_categoryGroups;
@property(readonly, nonatomic) NSDate *lastPublishedDate; // @synthesize lastPublishedDate=_lastPublishedDate;
@property(readonly, nonatomic) double viewScore; // @synthesize viewScore=_viewScore;
@property(readonly, nonatomic) unsigned long long upVoteCount; // @synthesize upVoteCount=_upVoteCount;
@property(readonly, nonatomic) unsigned long long downVoteCount; // @synthesize downVoteCount=_downVoteCount;
@property(readonly, nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(readonly, nonatomic) NSString *urlName; // @synthesize urlName=_urlName;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *articleNumber; // @synthesize articleNumber=_articleNumber;
@property(readonly, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (id)indexedValue;
- (id)indexedKey;
- (Class)actionModelForPropertyName:(id)arg1 propertyClass:(Class)arg2 contents:(id)arg3;
- (id)storageKeyPathForPropertyName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
