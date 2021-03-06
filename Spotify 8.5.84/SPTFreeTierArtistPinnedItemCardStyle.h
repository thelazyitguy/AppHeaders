//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUECalendarThumbnailViewStyle, GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString, SPTFreeTierArtistPinnedItemCommentStyle;

@interface SPTFreeTierArtistPinnedItemCardStyle : NSObject <GLUEStyle>
{
    double _heightToWidthScaleFactor;
    double _cornerRadius;
    GLUEImageStyle *_backgroundImageStyle;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEImageStyle *_contentImageStyle;
    GLUECalendarThumbnailViewStyle *_calendarViewStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    SPTFreeTierArtistPinnedItemCommentStyle *_commentStyle;
    double _cellMaximumWidth;
    struct CGSize _contentImageSize;
    struct CGSize _disclosureViewSize;
}

- (void).cxx_destruct;
@property(nonatomic) double cellMaximumWidth; // @synthesize cellMaximumWidth=_cellMaximumWidth;
@property(nonatomic) struct CGSize disclosureViewSize; // @synthesize disclosureViewSize=_disclosureViewSize;
@property(copy, nonatomic) SPTFreeTierArtistPinnedItemCommentStyle *commentStyle; // @synthesize commentStyle=_commentStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUECalendarThumbnailViewStyle *calendarViewStyle; // @synthesize calendarViewStyle=_calendarViewStyle;
@property(copy, nonatomic) GLUEImageStyle *contentImageStyle; // @synthesize contentImageStyle=_contentImageStyle;
@property(nonatomic) struct CGSize contentImageSize; // @synthesize contentImageSize=_contentImageSize;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) GLUEImageStyle *backgroundImageStyle; // @synthesize backgroundImageStyle=_backgroundImageStyle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double heightToWidthScaleFactor; // @synthesize heightToWidthScaleFactor=_heightToWidthScaleFactor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

