//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMapCmdTrace : NSObject
{
    unsigned long long _address;
    unsigned long long _offset;
    NSString *_symbolName;
    NSString *_fileName;
    NSString *_filePath;
    struct dl_info _info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(nonatomic) struct dl_info info; // @synthesize info=_info;

@end
