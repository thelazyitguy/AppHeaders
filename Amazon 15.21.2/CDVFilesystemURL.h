//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CDVFilesystemURL : NSObject
{
    NSURL *_url;
    NSString *_fileSystemName;
    NSString *_fullPath;
}

+ (id)fileSystemURLWithURL:(id)arg1;
+ (id)fileSystemURLWithString:(id)arg1;
@property(retain) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain) NSString *fileSystemName; // @synthesize fileSystemName=_fileSystemName;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)absoluteURL;
- (id)fullPathForLocalURI:(id)arg1;
- (id)filesystemNameForLocalURI:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithString:(id)arg1;

@end
