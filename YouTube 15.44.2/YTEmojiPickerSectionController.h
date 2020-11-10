//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeSectionController.h>

@class NSString, UIColor;

@interface YTEmojiPickerSectionController : YTInnerTubeSectionController
{
    NSString *_sectionTitle;
    UIColor *_headerBackgrondColor;
    UIColor *_headerTextColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *headerTextColor; // @synthesize headerTextColor=_headerTextColor;
@property(copy, nonatomic) UIColor *headerBackgrondColor; // @synthesize headerBackgrondColor=_headerBackgrondColor;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void)updateHeader:(id)arg1;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (Class)classForHeader;
- (struct UIEdgeInsets)insetWithInset:(struct UIEdgeInsets)arg1;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)loadWithModel:(id)arg1;
- (void)setGimme:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

@end

