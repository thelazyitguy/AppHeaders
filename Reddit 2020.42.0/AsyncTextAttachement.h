//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class NSURL;

@interface AsyncTextAttachement : NSTextAttachment
{
    NSURL *_url;
    long long _loadingState;
}

- (void).cxx_destruct;
@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)setImage:(id)arg1;
- (id)image;
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 placeholder:(id)arg2;

@end

