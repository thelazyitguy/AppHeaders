//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HTTPRequest.h>

@class NSString;

@interface HTTPSimplePostRequest : HTTPRequest
{
    NSString *contentType_;
    NSString *body_;
}

- (id)bodyData;
- (id)contentType;
- (id)HTTPMethod;
- (void)setBody:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)dealloc;

@end

