//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoEntity.h"

@class NSArray, NSNumber, NSString;

@interface NFUIBillboardPreviewsEntity : LolomoEntity
{
    _Bool _isWatched;
    NSNumber *_trailerVideo;
    NSNumber *_isOriginal;
    NSString *_panelArt;
    NSString *_storyArt;
    NSString *_titleTreatment;
    NSString *_titleTreatmentFallback;
    NSString *_originalBrandingUrl;
    NSString *_backgroundUrl;
    NSString *_boxshotUrl;
    NSString *_impressionToken;
    NSString *_actionToken;
    NSArray *_callToActions;
    NSArray *_tags;
    long long _billboardType;
    NSString *_foregroundColorString;
    NSString *_backgroundColorString;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backgroundColorString; // @synthesize backgroundColorString=_backgroundColorString;
@property(copy, nonatomic) NSString *foregroundColorString; // @synthesize foregroundColorString=_foregroundColorString;
@property(nonatomic) _Bool isWatched; // @synthesize isWatched=_isWatched;
@property(readonly, nonatomic) long long billboardType; // @synthesize billboardType=_billboardType;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSArray *callToActions; // @synthesize callToActions=_callToActions;
@property(copy, nonatomic) NSString *actionToken; // @synthesize actionToken=_actionToken;
@property(copy, nonatomic) NSString *impressionToken; // @synthesize impressionToken=_impressionToken;
@property(copy, nonatomic) NSString *boxshotUrl; // @synthesize boxshotUrl=_boxshotUrl;
@property(copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(copy, nonatomic) NSString *originalBrandingUrl; // @synthesize originalBrandingUrl=_originalBrandingUrl;
@property(copy, nonatomic) NSString *titleTreatmentFallback; // @synthesize titleTreatmentFallback=_titleTreatmentFallback;
@property(copy, nonatomic) NSString *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(copy, nonatomic) NSString *storyArt; // @synthesize storyArt=_storyArt;
@property(copy, nonatomic) NSString *panelArt; // @synthesize panelArt=_panelArt;
@property(readonly, copy, nonatomic) NSNumber *isOriginal; // @synthesize isOriginal=_isOriginal;
@property(copy, nonatomic) NSNumber *trailerVideo; // @synthesize trailerVideo=_trailerVideo;
- (id)callToActionForType:(unsigned long long)arg1;
- (id)backgroundColor;
- (id)foregroundColor;

@end

