//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface FIRInstallationsURLSessionResponse : NSObject
{
    NSHTTPURLResponse *_HTTPResponse;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSHTTPURLResponse *HTTPResponse; // @synthesize HTTPResponse=_HTTPResponse;
- (void).cxx_destruct;
- (id)initWithResponse:(id)arg1 data:(id)arg2;

@end

