//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseCollectionViewCell.h>

@class BaseImageView, NSURL, UIActivityIndicatorView;

@interface NetworkImageCollectionViewCell : BaseCollectionViewCell
{
    NSURL *_imageURL;
    BaseImageView *_imageView;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) BaseImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)configureWithURL:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

