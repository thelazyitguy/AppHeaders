//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRURLResponse.h"

@class NSDictionary, NSError, NSString;

@interface AIRJSONResponse : AIRURLResponse
{
    NSDictionary *_bodyDictionary;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (id)parsedBody:(id *)arg1;
- (void)parseError:(id *)arg1;
- (id)bodyDictionary;
- (id)initWithHTTPResponse:(id)arg1 originalRequest:(id)arg2 bodyData:(id)arg3 error:(id)arg4;
- (id)initWithHTTPResponse:(id)arg1 originalRequest:(id)arg2 bodyDictionary:(id)arg3 error:(id)arg4;
@property(nonatomic, readonly) NSString *tooManyRequestsErrorString;

@end
