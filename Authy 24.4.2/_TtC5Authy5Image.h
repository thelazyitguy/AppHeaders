//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface _TtC5Authy5Image : NSObject
{
    // Error parsing type: , name: url
    // Error parsing type: , name: path
    // Error parsing type: , name: etag
    // Error parsing type: , name: lastCheck
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(nonatomic, copy) NSDate *lastCheck;
@property(nonatomic, copy) NSString *etag;
@property(nonatomic, copy) NSString *path;
@property(nonatomic, copy) NSURL *url;

@end
