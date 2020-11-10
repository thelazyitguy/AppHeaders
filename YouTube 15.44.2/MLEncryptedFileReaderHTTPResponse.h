//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HTTPResponse-Protocol.h>

@class HTTPConnection, NSString, YTEncryptedFileReader;

@interface MLEncryptedFileReaderHTTPResponse : NSObject <HTTPResponse>
{
    HTTPConnection *_parentConnection;
    long long _contentLength;
    NSString *_contentType;
    YTEncryptedFileReader *_encryptedFileReader;
    _Bool _aborted;
}

- (void).cxx_destruct;
- (void)abort;
- (void)setOffset:(unsigned long long)arg1;
- (id)readDataOfLength:(unsigned long long)arg1;
- (_Bool)isDone;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)httpHeaders;
- (id)initWithConnection:(id)arg1 contentLength:(long long)arg2 contentType:(id)arg3 encryptedFileReader:(id)arg4;

@end

