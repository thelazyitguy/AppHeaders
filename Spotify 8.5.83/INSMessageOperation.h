//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class INSResponse, NSArray, NSError, NSString;
@protocol INSLogger, INSMessageOperationDelegate, INSTransport;

@interface INSMessageOperation : NSOperation
{
    _Bool _authenticate;
    NSArray *_envelopes;
    INSResponse *_response;
    NSError *_parseError;
    id <INSMessageOperationDelegate> _delegate;
    id <INSTransport> _transport;
    id <INSLogger> _logger;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool authenticate; // @synthesize authenticate=_authenticate;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <INSTransport> transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <INSMessageOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(retain, nonatomic) INSResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSArray *envelopes; // @synthesize envelopes=_envelopes;
- (void)validate;
- (void)main;
- (id)initWithTransport:(id)arg1 logger:(id)arg2 path:(id)arg3 authenticate:(_Bool)arg4 envelopes:(id)arg5 delegate:(id)arg6;

@end

