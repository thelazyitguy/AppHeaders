//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PlatformLogblobSinkProxyJob : NSObject
{
    _Bool _error;
    NSString *_logType;
    NSDictionary *_logblob;
    NSString *_xid;
    NSString *_esn;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *esn; // @synthesize esn=_esn;
@property(copy, nonatomic) NSString *xid; // @synthesize xid=_xid;
@property(nonatomic) _Bool error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *logblob; // @synthesize logblob=_logblob;
@property(copy, nonatomic) NSString *logType; // @synthesize logType=_logType;

@end
