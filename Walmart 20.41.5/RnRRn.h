//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString;

@interface RnRRn : NSObject
{
    _Bool _isDone;
    _Bool _compressPost;
    _Bool _anyCert;
    int _port;
    long long _status;
    NSData *paDtt1;
    NSString *_fingerprint;
    NSString *_filename;
    NSString *_scheme;
    NSString *_host;
    long long _errorCode;
    double _timeout;
    NSMutableData *iaree1;
    NSMutableURLRequest *_request;
    id _NSURLConnectionClass;
    id _connect;
    NSString *_path;
    NSString *_args;
    NSMutableDictionary *_extraHeaders;
    NSArray *chHtt1;
    NSArray *_pubKeyHash;
}

@property(retain, nonatomic) NSArray *pubKeyHash; // @synthesize pubKeyHash=_pubKeyHash;
- (void)shtrr;
@property(retain, nonatomic) NSArray *chHtt; // @synthesize chHtt=chHtt1;
@property(retain, nonatomic) NSMutableDictionary *extraHeaders; // @synthesize extraHeaders=_extraHeaders;
@property(retain, nonatomic) NSString *args; // @synthesize args=_args;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool anyCert; // @synthesize anyCert=_anyCert;
@property(retain, nonatomic) id connect; // @synthesize connect=_connect;
@property(retain, nonatomic) id NSURLConnectionClass; // @synthesize NSURLConnectionClass=_NSURLConnectionClass;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void)salaR;
@property(retain, nonatomic) NSMutableData *iaree; // @synthesize iaree=iaree1;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) _Bool compressPost; // @synthesize compressPost=_compressPost;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void)satss;
@property(retain, nonatomic) NSData *paDtt; // @synthesize paDtt=paDtt1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isDone; // @synthesize isDone=_isDone;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (long long)ldohL;
- (void)aseHe;
- (void)stPtP;
- (void)stHtH;
@property(readonly, nonatomic) NSData *rarrn;
- (id)isPdt;

@end
