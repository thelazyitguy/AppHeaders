//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTHairlineButton.h"

@interface GBTReplyActionsButton : GBTHairlineButton
{
    _Bool _showTitleInNewLine;
}

@property(nonatomic) _Bool showTitleInNewLine; // @synthesize showTitleInNewLine=_showTitleInNewLine;
- (void)updateEdgeInsets;
- (void)configureColors;
- (void)configureButton;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)fitsInWidth:(double)arg1;

@end
