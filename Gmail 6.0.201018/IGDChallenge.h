//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDChallenge : NSObject
{
    struct unique_ptr<iosguard::ChallengeImpl, std::__1::default_delete<iosguard::ChallengeImpl>> _impl;
}

+     // Error parsing type: @24@0:8^{ChallengeImpl=@{DeviceChallenge=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}^{MessageLite}Q{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}}{shared_ptr<iosguard::ChallengeEnv>=^{ChallengeEnv}^{__shared_weak_count}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}dd{vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}{__compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > >=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}{unique_ptr<iosguard::SignatureVerifier, std::__1::default_delete<iosguard::SignatureVerifier> >={__compressed_pair<iosguard::SignatureVerifier *, std::__1::default_delete<iosguard::SignatureVerifier> >=^{SignatureVerifier}}}Q{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}@}16, name: challengeWithImpl:
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: ^{ChallengeImpl=@{DeviceChallenge=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}^{MessageLite}Q{ArenaStringPtr={TaggedPtr<std::__1::basic_string<char> >=^v}}}{shared_ptr<iosguard::ChallengeEnv>=^{ChallengeEnv}^{__shared_weak_count}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}dd{vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}{__compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > >=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}{unique_ptr<iosguard::SignatureVerifier, std::__1::default_delete<iosguard::SignatureVerifier> >={__compressed_pair<iosguard::SignatureVerifier *, std::__1::default_delete<iosguard::SignatureVerifier> >=^{SignatureVerifier}}}Q{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}@}16@0:8, name: impl
- (id)snapshotWithContent:(id)arg1;

@end
