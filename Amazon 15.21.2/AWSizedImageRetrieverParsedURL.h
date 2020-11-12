//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface AWSizedImageRetrieverParsedURL : NSObject
{
    NSURL *_url;
    NSURL *_nativeURL;
    unsigned long long _width;
    unsigned long long _height;
}

+ (id)parsedURLForURL:(id)arg1 withNativeURL:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSURL *nativeURL; // @synthesize nativeURL=_nativeURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end
