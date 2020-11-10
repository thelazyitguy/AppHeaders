//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWACardType-Protocol.h>

@class GIPNetworkImageFetcher, NSString, UIImage;

@interface GWACardFormCardType : NSObject <GWACardType>
{
    GIPNetworkImageFetcher *_imageFetcher;
    NSString *_iconURI;
    UIImage *_icon;
    NSString *_uniqueId;
    NSString *_title;
    CDUnknownBlockType _iconUpdateBlock;
}

+ (struct CGSize)iconSize:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType iconUpdateBlock; // @synthesize iconUpdateBlock=_iconUpdateBlock;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)iconURI;
- (id)initWithTitle:(id)arg1 uniqueId:(id)arg2 icon:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)reportIconUpdate;
- (id)initWithIconURI:(id)arg1 title:(id)arg2 uniqueId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

