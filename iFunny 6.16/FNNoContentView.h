//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FNNoContentView : UIView
{
    double textOffset;
    UIImageView *_imageView;
    UILabel *_noThumbLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *noThumbLabel; // @synthesize noThumbLabel=_noThumbLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 icon:(id)arg2 text:(id)arg3 textOffset:(double)arg4;

@end
