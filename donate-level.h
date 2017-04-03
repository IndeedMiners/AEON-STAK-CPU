#pragma once

/*
 * Dev donation.
 * Percentage of your hashing power that you want to donate to the developer, can be 0.0 if you don't want to do that.
 * Example of how it works for the default setting of 1.0:
 * You miner will mine into your usual pool for 99 minutes, then switch to the developer's pool for 1.0 minute.
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 *
 * If you plan on changing this setting to 0.0 please consider making a one off donation to this fork wallet:
 * AEON FORK DONATION WALLET:
 * Wmt4c5SLGAE9QjeN7B2nt9i2XRegisu96af24VqhKMa53yDZjGui14bMYQK2WaQyj6D3GqndgVk4hMEbSSxdUSSv2qyygU83e
 *
 *
 * XMR WALLET FROM ORIGINAL CODE:
 * 4581HhZkQHgZrZjKeCfCJxZff9E3xCgHGF25zABZz7oR71TnbbgiS7sK9jveE6Dx6uMs2LwszDuvQJgRZQotdpHt1fTdDhk
 *
 */

constexpr double fDevDonationLevel = 1.0 / 100.0;
