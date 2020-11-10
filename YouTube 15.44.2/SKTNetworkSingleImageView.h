//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GIPNetworkImageView.h>

#import <Module_Framework/SKTNetworkImageView-Protocol.h>

@class NSURL, UIImage;

@interface SKTNetworkSingleImageView : GIPNetworkImageView <SKTNetworkImageView>
{
    NSURL *_url;
    struct CGSize _networkImageSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct CGSize networkImageSize; // @synthesize networkImageSize=_networkImageSize;
- (void)loadNetworkImage;
- (void)prepareForReuse;
- (void)configure;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIImage *defaultImage;

@end
