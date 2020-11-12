//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBCell.h"

@class BBGroupedCellBackgroundView, NSDictionary, NSMutableDictionary, UIImageView;

@interface BBGroupedTableViewCell : BBCell
{
    NSMutableDictionary *_customSubviews;
    _Bool _centerAccessoryView;
    int _position;
    float _cellContentViewOuterPadding;
    float _textLabelTopPadding;
    int _detailTextNumberOfLinesOverride;
    float _horizontalShadowPadding;
    float _verticalShadowPadding;
    unsigned long long _customType;
    unsigned long long _backgroundStyle;
    UIImageView *_rightIconView;
    UIImageView *_rightImageView;
    UIImageView *_leftIconView;
    CDUnknownBlockType _layoutBlock;
    long long _cellStyle;
    struct CGSize _outerPadding;
    struct UIEdgeInsets _backgroundInsets;
}

+ (double)idealHeight;
+ (double)heightOfRowForText:(id)arg1 withFont:(id)arg2 numberOfLines:(long long)arg3 withSubTitleText:(id)arg4 withSubFont:(id)arg5 subNumberOfLines:(long long)arg6 leftImageWidth:(float)arg7 rightAccessoryWidth:(float)arg8 withOuterPadding:(float)arg9 textLabelTopPadding:(float)arg10 withWidth:(double)arg11;
+ (double)heightOfRowForText:(id)arg1 withFont:(id)arg2 withSubTitleText:(id)arg3 withSubFont:(id)arg4 leftImageWidth:(float)arg5 rightAccessoryWidth:(float)arg6 withOuterPadding:(float)arg7 withWidth:(double)arg8;
+ (double)heightOfRowForText:(id)arg1 withFont:(id)arg2 withSubTitleText:(id)arg3 withSubFont:(id)arg4 leftImageWidth:(float)arg5 rightAccessoryWidth:(float)arg6 withWidth:(double)arg7;
- (void).cxx_destruct;
@property(nonatomic) float verticalShadowPadding; // @synthesize verticalShadowPadding=_verticalShadowPadding;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;
@property(nonatomic) float horizontalShadowPadding; // @synthesize horizontalShadowPadding=_horizontalShadowPadding;
@property(readonly, nonatomic) NSDictionary *customSubviews; // @synthesize customSubviews=_customSubviews;
@property(readonly, nonatomic) UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(readonly, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(readonly, nonatomic) UIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(nonatomic) int detailTextNumberOfLinesOverride; // @synthesize detailTextNumberOfLinesOverride=_detailTextNumberOfLinesOverride;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long customType; // @synthesize customType=_customType;
@property(nonatomic) float textLabelTopPadding; // @synthesize textLabelTopPadding=_textLabelTopPadding;
@property(nonatomic) float cellContentViewOuterPadding; // @synthesize cellContentViewOuterPadding=_cellContentViewOuterPadding;
@property(nonatomic) struct UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(nonatomic) struct CGSize outerPadding; // @synthesize outerPadding=_outerPadding;
@property(nonatomic) _Bool centerAccessoryView; // @synthesize centerAccessoryView=_centerAccessoryView;
@property(nonatomic) int position; // @synthesize position=_position;
- (void)addCustomSubview:(id)arg1 forKey:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectionStyle:(long long)arg1;
- (void)finalizeLayoutSubviews;
- (void)layoutSubviews;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) BBGroupedCellBackgroundView *backgroundView; // @dynamic backgroundView;
@property(retain, nonatomic) BBGroupedCellBackgroundView *selectedBackgroundView; // @dynamic selectedBackgroundView;

@end
