//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ProxyUrlHandler : NSObject
{
    int _index_playback_id;
    int _index_timestamp;
    int _index_protocol;
    int _index_remote_hostname;
    int _index_url_params;
    NSString *_parametersAndPath;
    NSArray *_components;
}

- (void).cxx_destruct;
@property(nonatomic) int index_url_params; // @synthesize index_url_params=_index_url_params;
@property(nonatomic) int index_remote_hostname; // @synthesize index_remote_hostname=_index_remote_hostname;
@property(nonatomic) int index_protocol; // @synthesize index_protocol=_index_protocol;
@property(nonatomic) int index_timestamp; // @synthesize index_timestamp=_index_timestamp;
@property(nonatomic) int index_playback_id; // @synthesize index_playback_id=_index_playback_id;
@property(retain, nonatomic) NSArray *components; // @synthesize components=_components;
@property(retain, nonatomic) NSString *parametersAndPath; // @synthesize parametersAndPath=_parametersAndPath;
- (void)readUnalignedInt64NtohTo:(unsigned long long *)arg1 from:(char *)arg2;
- (void)readUnalignedInt32NtohTo:(unsigned int *)arg1 from:(char *)arg2;
- (void)writeUnalignedInt32HtonTo:(char *)arg1 from:(char *)arg2;
- (void)writeUnalignedInt64HtonTo:(char *)arg1 from:(char *)arg2;
- (id)replaceTimestamps:(id)arg1;
- (id)remoteUrlString;
- (id)command;
- (id)initWithParametersAndPath:(id)arg1;

@end

