//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>

@interface ASCommRequest : NSMutableURLRequest
{
}

+ (id)commRequestForUrlRequest:(id)arg1;
+ (id)requestWithEndPoint:(id)arg1 withHttpMethod:(id)arg2 forTime:(double)arg3;
- (id)urlFromEndPoint:(id)arg1;
- (id)initWithEndPoint:(id)arg1 withHttpMethod:(id)arg2 forTime:(double)arg3;
- (void)dealloc;

@end
