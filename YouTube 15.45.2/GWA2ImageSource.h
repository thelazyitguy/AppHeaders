//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GWA2ImageSource : NSObject
{
    NSString *_source;
    unsigned long long _contentType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (id)initWithSource:(id)arg1 contentType:(unsigned long long)arg2;

@end
