//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSData, NSString, NSURL, UIImage;

@protocol GIPViewableImage <NSObject>
- (long long)index;
- (NSURL *)contextURL;
- (NSString *)subtitle;
- (NSString *)title;
- (_Bool)fetchFullImage;
- (_Bool)fetchThumbnail;
- (NSData *)rawImageData;
- (UIImage *)fullImage;
- (UIImage *)thumbnail;
@end

