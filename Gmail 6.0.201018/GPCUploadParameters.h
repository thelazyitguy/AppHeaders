//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSFileHandle, NSString, NSURL;

@interface GPCUploadParameters : NSObject <NSCopying>
{
    _Bool useBackgroundUpload_;
    NSString *mimeType_;
    NSData *data_;
    NSFileHandle *fileHandle_;
    NSURL *uploadLocationUrl_;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useBackgroundUpload; // @synthesize useBackgroundUpload=useBackgroundUpload_;
@property(retain, nonatomic) NSURL *uploadLocationUrl; // @synthesize uploadLocationUrl=uploadLocationUrl_;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=fileHandle_;
@property(retain, nonatomic) NSData *data; // @synthesize data=data_;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=mimeType_;
- (id)initWithFileHandle:(id)arg1 mimeType:(id)arg2;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
