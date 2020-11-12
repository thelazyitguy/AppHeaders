//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MDCButton.h>

#import <Module_Framework/GOOMultiLineButtonImplementsSizeThatFits-Protocol.h>

@interface GOODialogActionMDCButton : MDCButton <GOOMultiLineButtonImplementsSizeThatFits>
{
    _Bool _disableRTLTextAlignmentForTitle;
    _Bool _disableAutomaticButtonColor;
    double _minimumContentHeight;
    double _minimumWidth;
    struct UIEdgeInsets _calculatedContentEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets calculatedContentEdgeInsets; // @synthesize calculatedContentEdgeInsets=_calculatedContentEdgeInsets;
@property(nonatomic) _Bool disableAutomaticButtonColor; // @synthesize disableAutomaticButtonColor=_disableAutomaticButtonColor;
@property(nonatomic) _Bool disableRTLTextAlignmentForTitle; // @synthesize disableRTLTextAlignmentForTitle=_disableRTLTextAlignmentForTitle;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) double minimumContentHeight; // @synthesize minimumContentHeight=_minimumContentHeight;
- (struct CGSize)titleSizeWithWidth:(double)arg1;
- (struct CGSize)sizeOfContentsWithSize:(struct CGSize)arg1 shouldLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
