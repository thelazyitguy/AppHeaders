//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FileInfo : NSObject
{
    NSString *_path;
    NSDate *_accessDate;
    unsigned long long _size;
}

+ (id)fileInfoWithPath:(id)arg1 accessDate:(id)arg2 size:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *accessDate; // @synthesize accessDate=_accessDate;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;

@end

