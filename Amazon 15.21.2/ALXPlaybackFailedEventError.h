//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface ALXPlaybackFailedEventError : JSONModel
{
    unsigned long long _type;
    NSString *_message;
}

@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 message:(id)arg2;

@end
