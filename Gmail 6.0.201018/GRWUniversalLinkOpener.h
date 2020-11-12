//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface GRWUniversalLinkOpener : NSObject
{
    NSURL *_url;
    CDUnknownBlockType _completion;
}

+ (void)setUniversalLinkOpenStub:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)universalLinkOpenStub;
+ (id)sharedInstance;
+ (void)isURLSupported:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)testUniversalLinkSupportForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
