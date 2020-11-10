//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoEntity.h"

@class NSNumber, NSString;

@interface NFUIClipsVideoEntity : LolomoEntity
{
    _Bool _isAvailableForED;
    NSNumber *_videoId;
    NSNumber *_parentVideoId;
    NSNumber *_parentViewableId;
    NSNumber *_isOriginal;
    NSString *_titleTreatment;
    NSString *_parentTitle;
    NSString *_clipTitle;
    NSString *_parentCollectionName;
    NSString *_stillImage;
    NSString *_stillImageIdentifier;
    NSString *_maturityRating;
    NSNumber *_clipStart;
    NSNumber *_clipEnd;
    NSString *_foregroundColorString;
    NSString *_backgroundColorString;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backgroundColorString; // @synthesize backgroundColorString=_backgroundColorString;
@property(copy, nonatomic) NSString *foregroundColorString; // @synthesize foregroundColorString=_foregroundColorString;
@property(nonatomic) _Bool isAvailableForED; // @synthesize isAvailableForED=_isAvailableForED;
@property(copy, nonatomic) NSNumber *clipEnd; // @synthesize clipEnd=_clipEnd;
@property(copy, nonatomic) NSNumber *clipStart; // @synthesize clipStart=_clipStart;
@property(copy, nonatomic) NSString *maturityRating; // @synthesize maturityRating=_maturityRating;
@property(copy, nonatomic) NSString *stillImageIdentifier; // @synthesize stillImageIdentifier=_stillImageIdentifier;
@property(copy, nonatomic) NSString *stillImage; // @synthesize stillImage=_stillImage;
@property(copy, nonatomic) NSString *parentCollectionName; // @synthesize parentCollectionName=_parentCollectionName;
@property(copy, nonatomic) NSString *clipTitle; // @synthesize clipTitle=_clipTitle;
@property(copy, nonatomic) NSString *parentTitle; // @synthesize parentTitle=_parentTitle;
@property(copy, nonatomic) NSString *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(readonly, copy, nonatomic) NSNumber *isOriginal; // @synthesize isOriginal=_isOriginal;
@property(copy, nonatomic) NSNumber *parentViewableId; // @synthesize parentViewableId=_parentViewableId;
@property(copy, nonatomic) NSNumber *parentVideoId; // @synthesize parentVideoId=_parentVideoId;
@property(copy, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
- (id)backgroundColor;
- (id)foregroundColor;

@end
