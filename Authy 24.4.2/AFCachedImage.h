//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

@interface AFCachedImage : NSObject
{
    UIImage *_image;
    NSString *_identifier;
    unsigned long long _totalBytes;
    NSDate *_lastAccessDate;
    unsigned long long _currentMemoryUsage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentMemoryUsage; // @synthesize currentMemoryUsage=_currentMemoryUsage;
@property(retain, nonatomic) NSDate *lastAccessDate; // @synthesize lastAccessDate=_lastAccessDate;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;
- (id)accessImage;
- (id)initWithImage:(id)arg1 identifier:(id)arg2;

@end
