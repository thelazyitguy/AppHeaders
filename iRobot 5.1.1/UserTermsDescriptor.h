//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UserTermsDescriptor : NSObject
{
    NSString *_termsURL;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *termsURL; // @synthesize termsURL=_termsURL;
- (id)initWithTermsURL:(id)arg1 version:(id)arg2;

@end
