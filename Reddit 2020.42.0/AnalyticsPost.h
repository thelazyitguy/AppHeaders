//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsPost : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _typeIsSet;
    _Bool _titleIsSet;
    _Bool _nsfw;
    _Bool _nsfwIsSet;
    _Bool _spoiler;
    _Bool _spoilerIsSet;
    _Bool _urlIsSet;
    _Bool _domainIsSet;
    _Bool _body_textIsSet;
    _Bool _created_timestampIsSet;
    _Bool _promoted;
    _Bool _promotedIsSet;
    _Bool _author_idIsSet;
    _Bool _content_durationIsSet;
    _Bool _archived;
    _Bool _archivedIsSet;
    _Bool _crosspost_root_idIsSet;
    _Bool _number_gildingsIsSet;
    _Bool _original_content;
    _Bool _original_contentIsSet;
    _Bool _flairIsSet;
    _Bool _scoreIsSet;
    _Bool _upvote_ratioIsSet;
    _Bool _impression_idIsSet;
    _Bool _number_posts_from_adIsSet;
    _Bool _is_event;
    _Bool _is_eventIsSet;
    _Bool _is_scheduled;
    _Bool _is_scheduledIsSet;
    _Bool _submit_scheduled_timestampIsSet;
    _Bool _is_automated;
    _Bool _is_automatedIsSet;
    _Bool _comment_typeIsSet;
    _Bool _number_commentsIsSet;
    _Bool _subreddit_idIsSet;
    _Bool _subreddit_nameIsSet;
    _Bool _top_awarded_typeIsSet;
    _Bool _recommendation_sourceIsSet;
    _Bool _recommendation_source_subreddit_idIsSet;
    _Bool _recommendation_source_subreddit_nameIsSet;
    NSString *_id;
    NSString *_type;
    NSString *_title;
    NSString *_url;
    NSString *_domain;
    NSString *_body_text;
    long long _created_timestamp;
    NSString *_author_id;
    long long _content_duration;
    NSString *_crosspost_root_id;
    long long _number_gildings;
    NSString *_flair;
    long long _score;
    double _upvote_ratio;
    NSString *_impression_id;
    long long _number_posts_from_ad;
    long long _submit_scheduled_timestamp;
    NSString *_comment_type;
    long long _number_comments;
    NSString *_subreddit_id;
    NSString *_subreddit_name;
    NSString *_top_awarded_type;
    NSString *_recommendation_source;
    NSString *_recommendation_source_subreddit_id;
    NSString *_recommendation_source_subreddit_name;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool recommendation_source_subreddit_nameIsSet; // @synthesize recommendation_source_subreddit_nameIsSet=_recommendation_source_subreddit_nameIsSet;
@property(copy, nonatomic) NSString *recommendation_source_subreddit_name; // @synthesize recommendation_source_subreddit_name=_recommendation_source_subreddit_name;
@property(nonatomic) _Bool recommendation_source_subreddit_idIsSet; // @synthesize recommendation_source_subreddit_idIsSet=_recommendation_source_subreddit_idIsSet;
@property(copy, nonatomic) NSString *recommendation_source_subreddit_id; // @synthesize recommendation_source_subreddit_id=_recommendation_source_subreddit_id;
@property(nonatomic) _Bool recommendation_sourceIsSet; // @synthesize recommendation_sourceIsSet=_recommendation_sourceIsSet;
@property(copy, nonatomic) NSString *recommendation_source; // @synthesize recommendation_source=_recommendation_source;
@property(nonatomic) _Bool top_awarded_typeIsSet; // @synthesize top_awarded_typeIsSet=_top_awarded_typeIsSet;
@property(copy, nonatomic) NSString *top_awarded_type; // @synthesize top_awarded_type=_top_awarded_type;
@property(nonatomic) _Bool subreddit_nameIsSet; // @synthesize subreddit_nameIsSet=_subreddit_nameIsSet;
@property(copy, nonatomic) NSString *subreddit_name; // @synthesize subreddit_name=_subreddit_name;
@property(nonatomic) _Bool subreddit_idIsSet; // @synthesize subreddit_idIsSet=_subreddit_idIsSet;
@property(copy, nonatomic) NSString *subreddit_id; // @synthesize subreddit_id=_subreddit_id;
@property(nonatomic) _Bool number_commentsIsSet; // @synthesize number_commentsIsSet=_number_commentsIsSet;
@property(nonatomic) long long number_comments; // @synthesize number_comments=_number_comments;
@property(nonatomic) _Bool comment_typeIsSet; // @synthesize comment_typeIsSet=_comment_typeIsSet;
@property(copy, nonatomic) NSString *comment_type; // @synthesize comment_type=_comment_type;
@property(nonatomic) _Bool is_automatedIsSet; // @synthesize is_automatedIsSet=_is_automatedIsSet;
@property(nonatomic) _Bool is_automated; // @synthesize is_automated=_is_automated;
@property(nonatomic) _Bool submit_scheduled_timestampIsSet; // @synthesize submit_scheduled_timestampIsSet=_submit_scheduled_timestampIsSet;
@property(nonatomic) long long submit_scheduled_timestamp; // @synthesize submit_scheduled_timestamp=_submit_scheduled_timestamp;
@property(nonatomic) _Bool is_scheduledIsSet; // @synthesize is_scheduledIsSet=_is_scheduledIsSet;
@property(nonatomic) _Bool is_scheduled; // @synthesize is_scheduled=_is_scheduled;
@property(nonatomic) _Bool is_eventIsSet; // @synthesize is_eventIsSet=_is_eventIsSet;
@property(nonatomic) _Bool is_event; // @synthesize is_event=_is_event;
@property(nonatomic) _Bool number_posts_from_adIsSet; // @synthesize number_posts_from_adIsSet=_number_posts_from_adIsSet;
@property(nonatomic) long long number_posts_from_ad; // @synthesize number_posts_from_ad=_number_posts_from_ad;
@property(nonatomic) _Bool impression_idIsSet; // @synthesize impression_idIsSet=_impression_idIsSet;
@property(copy, nonatomic) NSString *impression_id; // @synthesize impression_id=_impression_id;
@property(nonatomic) _Bool upvote_ratioIsSet; // @synthesize upvote_ratioIsSet=_upvote_ratioIsSet;
@property(nonatomic) double upvote_ratio; // @synthesize upvote_ratio=_upvote_ratio;
@property(nonatomic) _Bool scoreIsSet; // @synthesize scoreIsSet=_scoreIsSet;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(nonatomic) _Bool flairIsSet; // @synthesize flairIsSet=_flairIsSet;
@property(copy, nonatomic) NSString *flair; // @synthesize flair=_flair;
@property(nonatomic) _Bool original_contentIsSet; // @synthesize original_contentIsSet=_original_contentIsSet;
@property(nonatomic) _Bool original_content; // @synthesize original_content=_original_content;
@property(nonatomic) _Bool number_gildingsIsSet; // @synthesize number_gildingsIsSet=_number_gildingsIsSet;
@property(nonatomic) long long number_gildings; // @synthesize number_gildings=_number_gildings;
@property(nonatomic) _Bool crosspost_root_idIsSet; // @synthesize crosspost_root_idIsSet=_crosspost_root_idIsSet;
@property(copy, nonatomic) NSString *crosspost_root_id; // @synthesize crosspost_root_id=_crosspost_root_id;
@property(nonatomic) _Bool archivedIsSet; // @synthesize archivedIsSet=_archivedIsSet;
@property(nonatomic) _Bool archived; // @synthesize archived=_archived;
@property(nonatomic) _Bool content_durationIsSet; // @synthesize content_durationIsSet=_content_durationIsSet;
@property(nonatomic) long long content_duration; // @synthesize content_duration=_content_duration;
@property(nonatomic) _Bool author_idIsSet; // @synthesize author_idIsSet=_author_idIsSet;
@property(copy, nonatomic) NSString *author_id; // @synthesize author_id=_author_id;
@property(nonatomic) _Bool promotedIsSet; // @synthesize promotedIsSet=_promotedIsSet;
@property(nonatomic) _Bool promoted; // @synthesize promoted=_promoted;
@property(nonatomic) _Bool created_timestampIsSet; // @synthesize created_timestampIsSet=_created_timestampIsSet;
@property(nonatomic) long long created_timestamp; // @synthesize created_timestamp=_created_timestamp;
@property(nonatomic) _Bool body_textIsSet; // @synthesize body_textIsSet=_body_textIsSet;
@property(copy, nonatomic) NSString *body_text; // @synthesize body_text=_body_text;
@property(nonatomic) _Bool domainIsSet; // @synthesize domainIsSet=_domainIsSet;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool urlIsSet; // @synthesize urlIsSet=_urlIsSet;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool spoilerIsSet; // @synthesize spoilerIsSet=_spoilerIsSet;
@property(nonatomic) _Bool spoiler; // @synthesize spoiler=_spoiler;
@property(nonatomic) _Bool nsfwIsSet; // @synthesize nsfwIsSet=_nsfwIsSet;
@property(nonatomic) _Bool nsfw; // @synthesize nsfw=_nsfw;
@property(nonatomic) _Bool titleIsSet; // @synthesize titleIsSet=_titleIsSet;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool typeIsSet; // @synthesize typeIsSet=_typeIsSet;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetRecommendation_source_subreddit_name;
- (void)unsetRecommendation_source_subreddit_id;
- (void)unsetRecommendation_source;
- (void)unsetTop_awarded_type;
- (void)unsetSubreddit_name;
- (void)unsetSubreddit_id;
- (void)unsetNumber_comments;
- (void)unsetComment_type;
- (void)unsetIs_automated;
- (void)unsetSubmit_scheduled_timestamp;
- (void)unsetIs_scheduled;
- (void)unsetIs_event;
- (void)unsetNumber_posts_from_ad;
- (void)unsetImpression_id;
- (void)unsetUpvote_ratio;
- (void)unsetScore;
- (void)unsetFlair;
- (void)unsetOriginal_content;
- (void)unsetNumber_gildings;
- (void)unsetCrosspost_root_id;
- (void)unsetArchived;
- (void)unsetContent_duration;
- (void)unsetAuthor_id;
- (void)unsetPromoted;
- (void)unsetCreated_timestamp;
- (void)unsetBody_text;
- (void)unsetDomain;
- (void)unsetUrl;
- (void)unsetSpoiler;
- (void)unsetNsfw;
- (void)unsetTitle;
- (void)unsetType;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 type:(id)arg2 title:(id)arg3 nsfw:(_Bool)arg4 spoiler:(_Bool)arg5 url:(id)arg6 domain:(id)arg7 body_text:(id)arg8 created_timestamp:(long long)arg9 promoted:(_Bool)arg10 author_id:(id)arg11 content_duration:(long long)arg12 archived:(_Bool)arg13 crosspost_root_id:(id)arg14 number_gildings:(long long)arg15 original_content:(_Bool)arg16 flair:(id)arg17 score:(long long)arg18 upvote_ratio:(double)arg19 impression_id:(id)arg20 number_posts_from_ad:(long long)arg21 is_event:(_Bool)arg22 is_scheduled:(_Bool)arg23 submit_scheduled_timestamp:(long long)arg24 is_automated:(_Bool)arg25 comment_type:(id)arg26 number_comments:(long long)arg27 subreddit_id:(id)arg28 subreddit_name:(id)arg29 top_awarded_type:(id)arg30 recommendation_source:(id)arg31 recommendation_source_subreddit_id:(id)arg32 recommendation_source_subreddit_name:(id)arg33;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
