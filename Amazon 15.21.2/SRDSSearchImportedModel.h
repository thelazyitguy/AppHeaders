//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString;
@protocol Optional, SRDSSearchStyledTextModel><Optional;

@interface SRDSSearchImportedModel : JSONModel
{
    NSNumber<Optional> *_hasBadge;
    NSString<Optional> *_badgeAssetId;
    NSArray<SRDSSearchStyledTextModel><Optional> *_importFeeMessage;
    NSArray<SRDSSearchStyledTextModel><Optional> *_importedMessageText;
}

@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *importedMessageText; // @synthesize importedMessageText=_importedMessageText;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *importFeeMessage; // @synthesize importFeeMessage=_importFeeMessage;
@property(retain, nonatomic) NSString<Optional> *badgeAssetId; // @synthesize badgeAssetId=_badgeAssetId;
@property(retain, nonatomic) NSNumber<Optional> *hasBadge; // @synthesize hasBadge=_hasBadge;
- (void).cxx_destruct;

@end
