//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL, STKThirdPartyEventTracker, STKVASTAssetTrack, STKXMLVASTCreativeModel, STKXMLVASTExtensionModel, STKXMLVASTInLineModel, STKXMLVASTMediaFileModel;

@interface STKVASTAsset : NSObject
{
    STKXMLVASTInLineModel *_inLine;
    STKXMLVASTCreativeModel *_creative;
    STKXMLVASTMediaFileModel *_media;
    STKXMLVASTExtensionModel *_extension;
    STKVASTAssetTrack *_track;
    STKThirdPartyEventTracker *_eventTracker;
    NSArray *_undefinedCompanions;
    NSArray *_extCompanions;
    NSArray *_companions;
    NSArray *_bannerCompanions;
}

+ (id)assetWithInLine:(id)arg1 error:(id *)arg2;
+ (id)assetWithInLine:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bannerCompanions; // @synthesize bannerCompanions=_bannerCompanions;
@property(retain, nonatomic) NSArray *companions; // @synthesize companions=_companions;
@property(retain, nonatomic) NSArray *extCompanions; // @synthesize extCompanions=_extCompanions;
@property(retain, nonatomic) NSArray *undefinedCompanions; // @synthesize undefinedCompanions=_undefinedCompanions;
@property(retain, nonatomic) STKThirdPartyEventTracker *eventTracker; // @synthesize eventTracker=_eventTracker;
@property(retain, nonatomic) STKVASTAssetTrack *track; // @synthesize track=_track;
@property(nonatomic) __weak STKXMLVASTExtensionModel *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak STKXMLVASTMediaFileModel *media; // @synthesize media=_media;
@property(nonatomic) __weak STKXMLVASTCreativeModel *creative; // @synthesize creative=_creative;
@property(retain, nonatomic) STKXMLVASTInLineModel *inLine; // @synthesize inLine=_inLine;
- (_Bool)companionEnabled;
- (id)assetStrokeColor;
- (id)assetFillColor;
@property(readonly, nonatomic) _Bool videoClickable;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) struct CGSize size;
- (float)aspectRatio;
@property(readonly, nonatomic) double skipOffset;
@property(readonly, nonatomic) double duration;
- (id)progressControlGuide;
- (id)repeatControlGuide;
- (id)closeControlGuide;
- (id)CTAControlGuide;
- (id)muteControlGuide;
- (struct CGSize)sizeFromMedia:(id)arg1;
- (_Bool)mediaFile:(id)arg1 betterThenScore:(unsigned long long *)arg2;
- (_Bool)linear:(id)arg1 betterThenScore:(unsigned long long *)arg2 errorOption:(unsigned long long *)arg3;
- (void)searchExtension;
- (void)searchOptimalFile;
- (id)initWithInLine:(id)arg1;

@end
