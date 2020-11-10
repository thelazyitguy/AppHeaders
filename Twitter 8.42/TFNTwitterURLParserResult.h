//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterURLParserResult : NSObject
{
    long long _type;
    long long _searchType;
    NSString *_nativeURLString;
    NSString *_screenName;
    long long _tweetId;
    NSString *_query;
    NSString *_src;
    NSString *_universalLinkURLString;
    NSString *_eventID;
    NSString *_slug;
    NSString *_timelineID;
    NSString *_title;
    NSString *_directMessageConversationID;
    NSString *_highlightsStoryID;
    NSString *_productId;
    NSString *_stickerID;
    NSString *_stickerTabID;
    NSString *_topicID;
    NSString *_topicTaxonomy;
    NSString *_topicImpressionID;
    NSString *_momentID;
    NSString *_reportingFollowupURLString;
    NSString *_listID;
    NSArray *_pinnedTweetIDs;
    NSString *_broadcastID;
    NSString *_sourceID;
    NSString *_referringEvent;
    NSString *_matchingRegexName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *matchingRegexName; // @synthesize matchingRegexName=_matchingRegexName;
@property(copy, nonatomic) NSString *referringEvent; // @synthesize referringEvent=_referringEvent;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
@property(copy, nonatomic) NSArray *pinnedTweetIDs; // @synthesize pinnedTweetIDs=_pinnedTweetIDs;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(copy, nonatomic) NSString *reportingFollowupURLString; // @synthesize reportingFollowupURLString=_reportingFollowupURLString;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(copy, nonatomic) NSString *topicImpressionID; // @synthesize topicImpressionID=_topicImpressionID;
@property(copy, nonatomic) NSString *topicTaxonomy; // @synthesize topicTaxonomy=_topicTaxonomy;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *stickerTabID; // @synthesize stickerTabID=_stickerTabID;
@property(copy, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *highlightsStoryID; // @synthesize highlightsStoryID=_highlightsStoryID;
@property(copy, nonatomic) NSString *directMessageConversationID; // @synthesize directMessageConversationID=_directMessageConversationID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *universalLinkURLString; // @synthesize universalLinkURLString=_universalLinkURLString;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) long long tweetId; // @synthesize tweetId=_tweetId;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *nativeURLString; // @synthesize nativeURLString=_nativeURLString;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) long long type; // @synthesize type=_type;

@end
