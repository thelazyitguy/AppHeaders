//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseImageView, BaseLabel, ScrollViewIndex;

@interface ScrollViewIndexBarIndicatorView : BaseView
{
    ScrollViewIndex *_index;
    BaseImageView *_imageView;
    BaseLabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BaseLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) BaseImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) ScrollViewIndex *index; // @synthesize index=_index;
- (void)layoutSubviews;
- (id)init;

@end
