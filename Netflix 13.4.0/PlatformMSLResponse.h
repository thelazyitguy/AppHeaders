//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/MSLResponse-Protocol.h>

@class NSDictionary, NSError;

@interface PlatformMSLResponse : NSObject <MSLResponse>
{
    NSDictionary *_headers;
    id _body;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id body; // @synthesize body=_body;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
- (id)initWithHeaders:(id)arg1 body:(id)arg2 error:(id)arg3;

@end
