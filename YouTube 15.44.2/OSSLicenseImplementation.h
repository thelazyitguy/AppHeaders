//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OSSLicense-Protocol.h"

@class NSBundle, NSString;

@interface OSSLicenseImplementation : NSObject <OSSLicense>
{
    NSString *_libraryName;
    NSBundle *_bundle;
    struct _NSRange _licenseRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange licenseRange; // @synthesize licenseRange=_licenseRange;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSString *libraryName; // @synthesize libraryName=_libraryName;
- (id)readLicenseTextWithError:(id *)arg1;
- (id)initWithBundle:(id)arg1 licenseRange:(struct _NSRange)arg2 libraryName:(id)arg3;

@end
