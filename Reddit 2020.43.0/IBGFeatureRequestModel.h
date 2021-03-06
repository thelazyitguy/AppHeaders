//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface IBGFeatureRequestModel : NSObject
{
    _Bool _isLiked;
    int _identifier;
    int _likesCount;
    int _commentsCount;
    int _status;
    NSString *_creatorName;
    NSString *_featureDescription;
    NSString *_title;
    NSDate *_date;
    NSArray *_comments;
    NSString *_colorCode;
}

+ (id)mapFromMOArray:(id)arg1;
+ (id)mapFromArray:(id)arg1;
@property(copy, nonatomic) NSString *colorCode; // @synthesize colorCode=_colorCode;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) int commentsCount; // @synthesize commentsCount=_commentsCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property int likesCount; // @synthesize likesCount=_likesCount;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(copy, nonatomic) NSString *featureDescription; // @synthesize featureDescription=_featureDescription;
@property(copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateFromFeatureRequest:(id)arg1;
- (void)downVote;
- (void)upVote;
- (id)textForStatus;
- (id)description;
- (id)initFromMO:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

